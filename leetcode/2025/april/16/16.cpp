class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        int n = nums.size(), same = 0, j = -1;
        unordered_map<int, int> map;
        long long ans = 0;

        for(int i=0; i<n; i++) {
            while(same < k && j+1 < n) {
                j++;
                same += map[nums[j]];
                map[nums[j]]++;
            }

            if(same >= k) ans += n - j;
            map[nums[i]]--;
            same -= map[nums[i]];
        }

        return ans;
    }
};
