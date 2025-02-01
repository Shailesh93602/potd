class Solution {
public:
    string shortestPalindrome(string s) {
        string ans = s;
        reverse(ans.begin(), ans.end());

        for(int i=0; i<s.length(); i++) 
            if(!memcmp(s.c_str(), ans.c_str()+i, s.length()-i)) 
                return ans.substr(0, i) + s;
        
        return ans + s;
    }
};
