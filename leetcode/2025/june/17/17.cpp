class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size(), ans = -1, prem = nums[0];

        for(int i=1; i<n; i++) {
            if(nums[i] > prem) ans = max(ans, nums[i] - prem);
            else prem = nums[i];
        }

        return ans;
    }
};
