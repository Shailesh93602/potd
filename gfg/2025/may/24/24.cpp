class Solution {
  public:
    int sumSubstrings(string &s) {
        // code here
        int n = s.length(), ans = 0;
        
        for(int i=0; i<n; i++) {
            int temp = 0;
            
            for(int j=i; j<n; j++) {
                temp *= 10;
                temp += (s[j] - '0');
                
                ans += temp;
            }
        }
        
        return ans;
    }
};
