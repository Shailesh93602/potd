class Solution {
    void palindromes(const string &s, vector<vector<bool>> &ans) {
        int n = s.length();;
        
        for(int i=0; i<n; i++) ans[i][i] = true;
        for(int i=0; i<n-1; i++) ans[i][i + 1] = (s[i] == s[i + 1]);
        for(int k=3; k<=n; k++) {
            for(int i=0; i<=n-k; i++) {
                int j = i + k - 1;
                ans[i][j] = (s[i] == s[j]) && ans[i + 1][j - 1];
            }
        }
    }
    void solve(int i, string &s, vector<string> &curr, vector<vector<string>> &res, vector<vector<bool>> &ans) {
        int n = s.length();
        
        if(i == n) {
            res.push_back(curr);
            return;
        }
        
        for(int j=i; j<n; j++) {
            if(ans[i][j]) {
                curr.push_back(s.substr(i, j - i + 1));
                solve(j + 1, s, curr, res, ans);
                curr.pop_back();
            }
        }
    }
  public:
    vector<vector<string>> palinParts(string &s) {
        // code here
        int n = s.length();
        vector<vector<bool>> ans(n + 1, vector<bool> (n + 1, false));
        
        palindromes(s, ans);
        
        vector<vector<string>> res;
        vector<string> curr;
        solve(0, s, curr, res, ans);
        
        return res;
    }
};
