class Solution {
  public:
    int countStrings(string &s) {
        // code here
        int n = s.length(), ans = 0;
        unordered_map<char, int> map;
        
        for(int i=0; i<n; i++) {
            ans += (i - map[s[i]]);
            map[s[i]]++;
        }
        
        for(auto it: map) {
            if(it.second > 1) {
                ans++;
                break;
            }
        }
        
        return ans;
    }
};
