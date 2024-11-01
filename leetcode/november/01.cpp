class Solution {
public:
    string makeFancyString(string s) {
        string ans = "";
        char ch = s[0];
        int count = 0;

        for(char c: s) {
            if(c == ch) {
                count++;
                if(count < 3) ans += c;
            }
            else {
                count = 1;
                ans += c;
                ch = c;
            }
        }

        return ans;
    }
};
