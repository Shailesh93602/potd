class Solution {
public:
    string clearDigits(string s) {
        int i = 0;

        for(char ch: s) {
            if(isdigit(ch)) i = max(i - 1, 0);
            else s[i++] = ch;
        }

        s.resize(i);
        return s;
    }
};
