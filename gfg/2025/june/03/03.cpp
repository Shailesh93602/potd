class Solution {
    int solve(string &s, int k) {
        int n = s.length(), ans = 0;
        
        vector<int> freq(26, 0);
        int count=0, i=0;
        
        for(int j=0; j<n; j++) {
            freq[s[j] - 'a']++;
            
            if(freq[s[j] - 'a'] == 1) count++;
            
            while(count > k) {
                freq[s[i] - 'a']--;
                
                if(freq[s[i++] - 'a'] == 0) count--;
            }
            
            ans += j - i + 1;
        }
        
        return ans;
    }
  public:
    int countSubstr(string& s, int k) {
        // code here.
        return solve(s, k) - solve(s, k-1);
    }
};
