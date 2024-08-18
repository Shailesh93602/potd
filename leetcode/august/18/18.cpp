class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> dp(n);
        dp[0] = 1;

        int i=0, j=0, k=0;

        for(int l=1; l<n; l++) {
            int count2 = dp[i] * 2;
            int count3 = dp[j] * 3;
            int count5 = dp[k] * 5;

            dp[l] = min(count2, min(count3, count5));

            if(dp[l] == count2) i++;
            if(dp[l] == count3) j++;
            if(dp[l] == count5) k++;
        }

        return dp[n-1];
    }
};
