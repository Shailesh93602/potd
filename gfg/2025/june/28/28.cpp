class Solution {
  public:
    vector<int> countLessEq(vector<int>& a, vector<int>& b) {
        // code here
        int n = a.size(), m = b.size();
        vector<int> ans(n), count(100001, 0);
        
        for(int i=0; i<m; i++) count[b[i]]++;
        
        for(int i=1; i<100001; i++) count[i] += count[i - 1];
        
        for(int i=0; i<n; i++) ans[i] = count[a[i]];
        
        return ans;
    }
};
