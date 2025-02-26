class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int minSum = 0, maxSum = 0, sum = 0;

        for(int i: nums) {
            sum += i;

            minSum = min(minSum, sum);
            maxSum = max(maxSum, sum);
        }

        return maxSum - minSum;
    }
};
