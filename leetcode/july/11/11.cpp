class Solution {
public:
    string reverseParentheses(string s) {
        string stack;
        for(char c: s) {
            if(c != ')') stack.push_back(c);
            else {
                string rev = "";
                char r = stack.back();
                for(; r!='('; r=stack.back()) {
                    rev += r;
                    stack.pop_back();
                }
                stack.pop_back();
                stack += rev;
            }
        }
        return stack;
    }
};
