class Solution {
public:
    int solve(vector<int> &nums, int p, int r) {
        long long prefixSum = 0;
        int minLen = nums.size();
        unordered_map<int, int> map;
        map[0] = -1;

        for(int i=0; i<nums.size(); i++) {
            prefixSum += nums[i];
            int target = (prefixSum%p - r+p)%p;

            if(map.find(target) != map.end())
                minLen = min(minLen, i-map[target]);

            map[prefixSum%p] = i;
        }

        if(minLen == nums.size()) return -1;

        return minLen;
    }
    int minSubarray(vector<int>& nums, int p) {
        long long ans = 0;
        for(int num: nums) ans += num;

        int r = ans%p;

        if(r == 0) return 0;

        return solve(nums, p, r);
    }
};
