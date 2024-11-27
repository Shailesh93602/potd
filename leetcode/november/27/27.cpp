class Solution {
public:
    int solve(vector<vector<int>> adj, int n) {
        vector<int> dp(n);
        dp[n-1] = 0;

        for(int i=n-2; i>=0; i--) {
            int minVal = n;
            for(auto j: adj[i]) minVal = min(minVal, dp[j]+1);
            dp[i] = minVal;
        }

        return dp[0];
    }
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
        vector<int> ans;
        vector<vector<int>> adj;

        for(int i=0; i<n-1; i++) adj.push_back({ i + 1 });

        for(vector<int> x: queries) {
            adj[x[0]].push_back(x[1]);
            ans.push_back(solve(adj, n));
        }

        return ans;
    }
};
