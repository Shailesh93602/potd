class Solution {
    int mod = 1000000007;
public:
    int idealArrays(int n, int maxValue) {
        int maxVal = min(15, n + 1);
        vector<vector<int>> dp(maxVal, vector<int>(n + 1));
        dp[0][0] = 1;

        for(int i=1; i<maxVal; i++) {
            int sum = dp[i-1][0];

            for(int j=1; j<=n; j++) {
                dp[i][j] = sum;
                sum = ((long long) sum + dp[i-1][j]) % mod;
            }
        }

        int ans = 0;
        vector<vector<int>> res(maxVal, vector<int>(maxValue + 1));
        
        for(int i=1; i<=maxValue; i++) res[1][i] = 1;
        for(int i=2; i<maxVal; i++) 
            for(int j=1; j<=maxValue; j++) 
                if(res[i-1][j] != 0) 
                    for(int k=2*j; k<=maxValue; k+=j) 
                        res[i][k] = ((long long)res[i][k] + res[i-1][j]) % mod;
            
        for(int i=1; i<maxVal; i++) 
            for(int j=1; j<=maxValue; j++) 
                ans = (ans + (long long) res[i][j] * dp[i][n] % mod) % mod;
        
        return ans;
    }
};
