class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n = nums.size();
        if(n <= 4) return 0;
        sort(nums.begin(), nums.end());

        int minVal = min(nums[n-4] - nums[0], nums[n-1] - nums[3]);
        minVal = min(minVal, nums[n-2] - nums[2]);
        minVal = min(minVal, nums[n-3] - nums[1]);

        return minVal;
    }
};
