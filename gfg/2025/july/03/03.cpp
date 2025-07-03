class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        int n = s.size(), i = 0, j = 0, ans = -1, count = 0;
        vector<int> freq(26, 0);
        
        while(j < n) {
            freq[s[j] - 'a']++;
            
            if(freq[s[j] - 'a'] == 1) count++;
            
            while(count > k) {
                freq[s[i] - 'a']--;
                
                if(freq[s[i++] - 'a'] == 0) count--;
            }
            
            if(count == k) ans = max(ans, j - i + 1);
            
            j++;
        }
        
        return ans;
    }
};
