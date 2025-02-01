class Solution {
public:
    string compressedString(string s) {
        string ans = "";
        int n = s.size();

        for(int i=0; i<n; i++) {
            char ch = s[i];
            int count = 1;

            while(i+1 < n && count < 9 && s[i+1] == ch) {
                count++;
                i++;
            }

            ans += count+'0';
            ans += ch;
        }

        return ans;
    }
};
