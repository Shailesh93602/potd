class Solution {
  public:
    int getCount(int n) {
        // code here
        vector<vector<int>> prev(4, vector<int>(3, 1)), 
                            curr(4, vector<int>(3));

        prev[3][0] = 0;
        prev[3][2] = 0;
        vector<vector<int>> dirs = {
            { 0, 0 },
            { 0, -1 },
            { 0, 1 },
            { -1, 0 },
            { 1, 0 }
        };
        
        for(int k=2; k<=n; k++) {
            for(int i=0; i<4; i++) {
                for(int j=0; j<3; j++) {
                    curr[i][j] = 0;
                    
                    if(i == 3 && (j == 0 || j == 2)) continue;
                    
                    for(auto dir: dirs) {
                        int x = i + dir[0], y = j + dir[1];
                        
                        if(x >= 0 && x < 4 && y >= 0 && y < 3) 
                            curr[i][j] += prev[x][y];
                    }
                }
            }
            
            for(int i=0; i<4; i++) 
                for(int j=0; j<3; j++) 
                    prev[i][j] = curr[i][j];
        }

        int ans = 0;
        for(int i=0; i<4; i++) 
            for(int j=0; j<3; j++) 
                ans += prev[i][j];
                
        return ans;
    }
};
