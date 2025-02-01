class Solution {
public:
    int solve(string &s, int index, char prev, int &k, vector<vector<int>>& dp) {
        if(index >= s.length()) return 0;
        if(dp[index][prev - 'a'] != -1) return dp[index][prev - 'a'];
        if(index == 0 || prev == '{') return dp[index][prev-'a'] = 
            max(1 + solve(s, index+1, s[index], k, dp), solve(s, index+1, prev, k, dp));
        if(prev != '{' && abs(s[index]-prev) <= k) {
            dp[index][prev - 'a'] = max(1 + solve(s, index+1, s[index], k, dp),
                solve(s, index+1, prev, k, dp));
            return dp[index][prev - 'a'];
        }
        if(prev != '{' && abs(s[index]-prev) > k) {
            dp[index][prev - 'a'] = solve(s, index+1, prev, k, dp);
            return dp[index][prev - 'a'];
        }
        return 0;
    }
    int longestIdealString(string s, int k) {
        vector<vector<int>>dp(s.length(),vector<int>(27,-1));
        int index = 0;
        char prev = '{';
        return solve(s, index, prev, k, dp);
    }
};
