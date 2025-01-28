class Solution {
    int solve(int i, int j, vector<vector<int>> &grid) {
        int n = grid.size(), m = grid[0].size();

        if(i < 0 || j < 0 || i >= n || j >= m || grid[i][j] == 0) return 0;

        int ans = grid[i][j];
        grid[i][j] = 0;

        ans += solve(i + 1, j, grid);
        ans += solve(i - 1, j, grid);
        ans += solve(i, j + 1, grid);
        ans += solve(i, j - 1, grid);

        return ans;
    }
public:
    int findMaxFish(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size(), ans = 0;
        
        for(int i=0; i<n; i++) 
            for(int j=0; j<m; j++)
                if(grid[i][j] != 0) ans = max(ans, solve(i, j, grid));
            
        return ans;
    }
};
