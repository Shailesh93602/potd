class Solution {
    int m, n;
public:
    bool isValid(int x, int y) {
        return x >= 0 && x < m && y >= 0 && y < n;
    }
    int minimumObstacles(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, INT_MAX));
        dp[0][0] = 0;

        vector<int> dir{0, 1, 0, -1, 0};
        set<vector<int>> s;
        s.insert({ 0, 0, 0 });

        while(!s.empty()) {
            vector<int> curr = *(s.begin());
            s.erase(s.begin());
            
            int x = curr[1], y = curr[2];

            for(int i=0; i<4; i++) {
                int nx = x + dir[i], ny = y + dir[i+1];

                if(isValid(nx, ny)) {
                    int len = grid[nx][ny];
                    if(dp[x][y] + len < dp[nx][ny]) {
                        s.erase({ dp[nx][ny], nx, ny });
                        dp[nx][ny] = dp[x][y] + len;
                        s.insert({ dp[nx][ny], nx, ny });
                    }
                }
            }
        }
        return dp[m-1][n-1];
    }
};
