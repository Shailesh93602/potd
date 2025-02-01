class Solution {
public:
    void solve(vector<vector<char>>& grid, int i, int j) {
        if(i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] != '1') return;

        grid[i][j] = '0';
        solve(grid, i+1, j);
        solve(grid, i-1, j);
        solve(grid, i, j+1);
        solve(grid, i, j-1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        if(grid.empty() || grid[0].empty()) return count;
        int n = grid.size();
        int m = grid[0].size();

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(grid[i][j] == '1') {
                    count++;
                    solve(grid, i, j);
                }
            }
        }
        return count;
    }
};
