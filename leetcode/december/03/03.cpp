class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans;
        int i = 0, j = 0;
        int n = s.length(), m = spaces.size();
        while(i < n && j < m) {
            while(i < spaces[j]) ans += s[i++];
            j++;
            ans += ' ';
        }
        while(i < n) ans += s[i++];
        while(j++ < m) ans += ' ';

        return ans;
    }
};
