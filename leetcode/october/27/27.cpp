class Solution {
public:
    int solve(int i, int j, vector<vector<int>> &mat, vector<vector<int>> &dp) {
        if(i >= mat.size() || j >= mat[0].size()) return 0;
        if(mat[i][j] == 0) return 0;

        if(dp[i][j] != -1) return dp[i][j];

        return dp[i][j] = 1 
                        + min(solve(i, j+1, mat, dp)
                        , min(solve(i+1, j+1, mat, dp)
                        , solve(i+1, j, mat, dp)));
    }
    int countSquares(vector<vector<int>>& mat) {
        int count = 0;
        int n = mat.size(), m = mat[0].size();
        vector<vector<int>> dp(n, vector<int>(m, -1));

        for(int i=0; i<n; i++) 
            for(int j=0; j<m; j++) 
                count += solve(i, j, mat, dp);

        return count;
    }
};
