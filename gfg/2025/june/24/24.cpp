class Solution {
  public:
    string maxSubseq(string& s, int k) {
        // code here
        int n = s.length(), count = k;
        string ans = "";
        
        for(int i=0; i<n; i++) {
            while(!ans.empty() && count > 0 && ans.back() < s[i]) {
                ans.pop_back();
                count--;
            }
            
            ans.push_back(s[i]);
        }
        
        ans.resize(n - k);
        
        return ans;
    }
};
