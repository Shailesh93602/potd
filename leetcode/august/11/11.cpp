class Solution {
public:
    int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    int dfs(int i, int j, vector<vector<int>>& grid, vector<vector<int>>& vis) {
        int m = grid.size(), n = grid[0].size();
        if(i>=m || i<0 || j<0 || j>=n || grid[i][j] == 0 || vis[i][j]) return 0;
        int ans = 1;
        vis[i][j] = 1;
        for(int d=0; d<4; d++) {
            ans += dfs(i+dir[d][0], j+dir[d][1], grid, vis);
        }
        return ans;
    }
    int minDays(vector<vector<int>>& grid) {
         int m = grid.size(), n = grid[0].size(), num = 0;
        vector<vector<int>> vis(m, vector<int>(n, 0));
        
        // check if the num >= 2 || num == 0
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(grid[i][j] == 1 && !vis[i][j]) {
                    num++;
                    dfs(i, j, grid, vis);
                }
            }
        }
        if(num > 1 || num == 0) return 0; // number of island >= 2 OR no island

        // remove single grid, find the min remove.
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(grid[i][j] == 1) {
                    int cnt = 0, gridCnt = 0;
                    vis = vector<vector<int>>(m, vector<int>(n, 0));
                    vis[i][j] = 1;
                    for(int d=0; d<4; d++) {
                        cnt += dfs(i+dir[d][0], j+dir[d][1], grid, vis) > 0 ? 1: 0;
                    }
                        
                    // remove this grid, num==2 OR num==0
                    if(cnt >= 2 || cnt == 0) return 1;
                }
            }
        }
        return 2;
    }
};
