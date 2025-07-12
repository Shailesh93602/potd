class Solution {
    bool isValid(int x, int y, int n, int m) {
        return x >= 0 && x < n && y >= 0 && y < m;
    }
  public:
    int maxGold(vector<vector<int>>& mat) {
        // code here
        int n = mat.size(), m = mat[0].size();
        
        for(int y=m-2; y>=0; y--) {
            for(int x=0; x<n; x++) {
                int maxVal = 0;
                
                if(isValid(x - 1, y + 1, n, m)) 
                    maxVal = max(maxVal, mat[x - 1][y + 1]);
                if(isValid(x, y + 1, n, m)) 
                    maxVal = max(maxVal, mat[x][y + 1]);
                if(isValid(x + 1, y + 1, n, m)) 
                    maxVal = max(maxVal, mat[x + 1][y + 1]);
                
                mat[x][y] += maxVal;
            }
        }

        int ans = 0;
        
        for(vector<int> x: mat) ans = max(ans, x[0]);

        return ans;
    }
};
