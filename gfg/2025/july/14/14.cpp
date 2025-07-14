class Solution {
  public:
    int cuts(string s) {
        // code here
        if(s[0] == '0') return -1;
        
        int n = s.size(), val = 1;
        unordered_set<int> set;
        
        while(val <= 1e9) {
            set.insert(val);
            val *= 5;
        }

        vector<int> ans(n + 1, n + 1);
        ans[n] = 0;
        
        for(int i=n-1; i>=0; i--) {
            if(s[i] == '0') continue;
            
            int num = 0;
            for(int j=i; j<n; j++) {
                num = num * 2;
                if(s[j] == '1') num++;
                
                if(set.count(num)) 
                    if(ans[j + 1] != n + 1) 
                        ans[i] = min(ans[i], 1 + ans[j + 1]);
                
                
            }
        }
        
        if(ans[0] >= n + 1) return -1;
        
        return ans[0];
    }
};
