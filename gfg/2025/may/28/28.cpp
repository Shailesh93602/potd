class Solution {
  public:
    bool ValidCorner(vector<vector<int> >& mat) {
        // code here
        int n = mat.size(), m = mat[0].size();
        unordered_set<string> map;
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<m-1; j++) {
                if(mat[i][j] == 0) continue;
                
                for(int k=j+1; k<m; k++) {
                    if(mat[i][k] == 0) continue;
                    
                    string key = to_string(j) + "," + to_string(k);
                    
                    if(map.find(key) != map.end()) return true;
                    
                    map.insert(key);
                }
            }
        }
        
        return false;
    }
};
