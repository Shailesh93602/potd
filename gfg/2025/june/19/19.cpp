class Solution {
  public:
    string caseSort(string& s) {
        // code here
        int n = s.length();
        vector<int> lower(26, 0), upper(26, 0);
        
        for(char ch: s) {
            if(islower(ch)) lower[ch - 'a']++;
            else upper[ch - 'A']++;
        }
        
        string ans = s;
        int l = 0, u = 0;
        
        for(int i=0; i<n; i++) {
            if(islower(s[i])) {
                while(lower[l] == 0) l++;
                
                ans[i] = 'a' + l;
                lower[l]--;
            } else {
                while(upper[u] == 0) u++;
                
                ans[i] = 'A' + u;
                upper[u]--;
            }
        }

        return ans;
    }
};
