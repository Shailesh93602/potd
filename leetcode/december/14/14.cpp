class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        long ans = 0;
        int i=0, j=0, n = nums.size();
        map<int, int> map;

        while(j < n) {
            map[nums[j++]]++;

            while(map.rbegin()->first - map.begin()->first > 2) {
                map[nums[i]]--;

                if(map[nums[i]] == 0) map.erase(nums[i]);
                
                i++;
            }

            ans += j - i;
        }

        return ans;
    }
};
