class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int ans = 0, currSum = nums[0];

        for(int i=1; i<nums.size(); i++) {
            if(nums[i] <= nums[i-1]) {
                ans = max(ans, currSum);
                currSum = 0;
            }

            currSum += nums[i];
        }

        return max(ans, currSum);
    }
};
