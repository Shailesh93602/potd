class Solution {
  public:
    int noOfWays(int m, int n, int x) {
        vector<int> ans(x + 1, 0);
        ans[0] = 1;
        
        for(int i=1; i<=n; i++) {
            for(int j=x; j>=1; j--) {
                ans[j] = 0;
                
                for(int k=1; k<=m && j-k>=0; k++) ans[j] += ans[j - k];
            }
            
            ans[0] = 0;
        }
        
        return ans[x];
    }
};
