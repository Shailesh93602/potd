class Solution {
public:
    void dfs(vector<vector<int>> &grid, int i, int j) {
        int n = grid.size();
        int m = grid[0].size();
        if(i<0 || i>=n || j<0 || j>=m || grid[i][j]) return;

        grid[i][j] = 1;
        dfs(grid, i-1, j);
        dfs(grid, i+1, j);
        dfs(grid, i, j-1);
        dfs(grid, i, j+1);
    }
    int regionsBySlashes(vector<string>& grid) {
        int n = grid.size();
        int size = n * 3;
        vector<vector<int>> ans(size, vector<int>(size, 0));

        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(grid[i][j] == '/') {
                    ans[i*3][j*3+2] = 1;
                    ans[i*3+1][j*3+1] = 1;
                    ans[i*3+2][j*3] = 1;
                }
                else if(grid[i][j] == '\\') {
                    ans[i*3][j*3] = 1;
                    ans[i*3+1][j*3+1] = 1;
                    ans[i*3+2][j*3+2] = 1;
                }
            }
        }

        int count = 0;
        for(int i=0; i<size; i++) {
            for(int j=0; j<size; j++) {
                if(!ans[i][j]) {
                    dfs(ans, i, j);
                    count++;
                }
            }
        }
        
        return count;
    }
};
