class Solution {
  public:
    vector<int> search(string &pat, string &txt) {
        // code here.
        int d = 256, q = 101, m = pat.length(), n = txt.length(), 
            p = 0, t = 0, h = 1;
        
        vector<int> ans;
        
        for(int i=0; i<m-1; i++) h = (h * d) % q;
        
        for(int i=0; i<m; i++) {
            p = (d * p + pat[i]) % q;
            t = (d * t + txt[i]) % q;
        }
    
        for(int i=0; i<=n-m; i++) {
            if(p == t) {
                bool match = true;
            
                for(int j=0; j<m; j++) {
                    if(txt[i + j] != pat[j]) {
                        match = false;
                        break;
                    }
                }
            
                if(match) ans.push_back(i + 1);
            }
            
            if(i < n - m) {
                t = (d * (t - txt[i] * h) + txt[i + m]) % q;
                
                if(t < 0) t += q;
            }
        }
    
        return ans;
    }
};
