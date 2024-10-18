class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int maxVal = 0;
        vector<int> dp(1 << 17, 0);
        dp[0] = 1;

        for(int num: nums) {
            for(int i=maxVal; i>=0; i--) dp[i | num] += dp[i];
            maxVal |= num;
        }

        return dp[maxVal];
    }
};
