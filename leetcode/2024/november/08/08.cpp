class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n = nums.size();
        int xorVal = 0;

        for(int i: nums) xorVal ^= i;
        
        vector<int> ans(nums.size());
        int mask = (1 << maximumBit) - 1;

        for(int i=0; i<n; i++) {
            ans[i] = xorVal ^ mask;
            xorVal ^= nums[n - i - 1];
        }

        return ans;
    }
};
