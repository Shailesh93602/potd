class Solution {
  public:
    int substrCount(string &s, int k) {
        // code here
        int n = s.length();
        
        if(k > n) return 0;
        
        vector<int> counts(26, 0);
        int ans = 0, disCount = 0;
        
        for(int i=0; i<k-1; i++) {
            counts[s[i] - 'a']++;
            
            if(counts[s[i] - 'a'] == 1) disCount++;
        }
        
        for(int i=k-1; i<n; i++) {
            counts[s[i] - 'a']++;
            
            if(counts[s[i] - 'a'] == 1) disCount++;
            
            if(disCount == k - 1) ans++;
            
            counts[s[i - k + 1] - 'a']--;
            
            if(counts[s[i - k + 1] - 'a'] == 0) disCount--;
        }
        
        return ans;
    }
};
