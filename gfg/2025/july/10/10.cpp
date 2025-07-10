class Solution {
    static bool cmp(string a, string b) {
        if(a.length() != b.length()) return a.length() < b.length();
        
        return a > b;
    }
  public:
    string longestString(vector<string> &words) {
        // code here
        unordered_map<string, int> map;
        int n = words.size();
        
        for(int i=0; i<n; i++) map[words[i]]++;
        
        sort(words.begin(), words.end(), cmp);
        
        for(int i=n-1; i>=0; i--) {
            int j = words[i].length();
            bool flag = true;
            string temp = "";
            
            for(int k=0; k<j; k++) {
                temp += words[i][k];
                
                if(map[temp] == 0) {
                    flag = false;
                    break;
                }
            }
            
            if(flag) return words[i];
        }
        
        return "";
    }
};
