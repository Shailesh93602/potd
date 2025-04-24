class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n = nums.size(), ans = 0, j = 0;
        unordered_map<int, int> map;
        unordered_set<int> s(nums.begin(), nums.end());
        int count = s.size();

        for(int i=0; i<n; i++) {
            if(i > 0) {
                int remove = nums[i - 1];
                map[remove]--;

                if(map[remove] == 0) map.erase(remove);
            }

            while(j < n && map.size() < count) map[nums[j++]]++;

            if(map.size() == count) ans += (n - j + 1);
        }

        return ans;
    }
};
