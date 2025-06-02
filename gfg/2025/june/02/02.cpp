class Solution {
  public:
    int uniquePaths(vector<vector<int>> &grid) {
        // code here
        int n = grid.size(), m = grid[0].size();
        
        if(grid[0][0] == 1 || grid[n-1][m-1] == 1) return 0;
        
        vector<int> ans(m, 0);
        ans[m-1] = 1;
        
        for(int i=m-2; i>=0; i--) {
            if(grid[n-1][i] == 1) ans[i] = 0;
            else ans[i] = ans[i + 1];
        }
        
        for(int i=n-2; i>=0; i--) {
            if(grid[i][m-1] == 1) ans[m-1] = 0;
            
            for(int j=m-2; j>=0; j--) {
                if(grid[i][j] == 1) ans[j] = 0;
                else ans[j] = ans[j] + ans[j + 1];
            }
        }
        
        return ans[0];
    }
};
