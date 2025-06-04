class Solution {
  public:
    int lcsOf3(string& s1, string& s2, string& s3) {
        // Code here
        int l = s1.length(), m = s2.length(), n = s3.length();
        
        vector<vector<int>> prev(m + 1, vector<int>(n + 1, 0)),
                            curr(m + 1, vector<int>(n + 1, 0));
                            
        for(int i=1; i<=l; i++) {
            for(int j=1; j<=m; j++) {
                for(int k=1; k<=n; k++) {
                    if(s1[i - 1] == s2[j - 1] && s2[j - 1] == s3[k - 1])
                        curr[j][k] = 1 + prev[j - 1][k - 1];
                    else 
                        curr[j][k] = max({ prev[j][k], curr[j - 1][k], curr[j][k - 1] });
                }
            }
            
            prev = curr;
        }
        
        return curr[m][n];
    }
};
