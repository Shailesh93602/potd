class Solution {
  public:
    int minValue(string &s, int k) {
        // code here
        int n = s.length(), maxVal = 0;
        vector<int> count(26, 0);
        
        for(char ch: s) {
            count[ch - 'a']++;
            maxVal = max(maxVal, count[ch - 'a']);
        }
        
        vector<int> map(maxVal + 1, 0);
        int maxFreq = 0;
        
        for(int i=0; i<26; i++) {
            if(count[i] > 0) {
                map[count[i]]++;
                maxFreq = max(maxFreq, count[i]);
            }
        }
        
        while(k > 0 && maxFreq > 0) {
            int maxCount = map[maxFreq];
            
            if(maxCount <= k) {
                k -= maxCount;
                map[maxFreq - 1] += maxCount;
                map[maxFreq] = 0;
                maxFreq--;
            } else {
                map[maxFreq] -=k;
                map[maxFreq - 1] += k;
                k = 0;
            }
        }
        
        int ans = 0;
        for(int i=1; i<=maxVal; i++) ans += i * i * map[i];
        
        return ans;
    }
};
