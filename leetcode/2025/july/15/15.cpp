class Solution {
public:
    bool isValid(string word) {
        if(word.length() < 3) return false;

        bool flag1 = false, flag2 = false;

        for(char ch: word) {
            if(isalpha(ch)) {
                ch = tolower(ch);

                if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') flag1 = true;
                else flag2 = true;
            } else if(!isdigit(ch)) return false;
        }

        return flag1 && flag2;
    }
};
