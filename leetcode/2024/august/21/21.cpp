class Solution {
public:
    vector<vector<int>> dp;
    int solve(string &s, int i, int j) {
        if(i > j) return 0;
        if(dp[i][j] != -1) return dp[i][j];

        int ans = solve(s, i, j-1) + 1;
        for(int k=i; k<j; k++) 
            if(s[k] == s[j]) 
                ans = min(ans, solve(s, i, k) + solve(s, k+1, j-1));
        
        return dp[i][j] = ans;
    }
    int strangePrinter(string s) {
        int n = s.size();

        dp.clear();
        dp.resize(n+1, vector<int>(n+1, -1));

        return solve(s, 0, n-1);
    }
};
