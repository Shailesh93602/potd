class Solution {
public:
    int maxDepth(string s) {
        int n = s.length();
        if(n == 0) return 0;
        if(n == 1 && s != "(" && s != ")") return 0;
        int maxLen = 0;
        int count = 0;
        for(int i=0; i<n; i++) {
            if(s[i] == '(') count++;
            else if(s[i] == ')') count--;
            if(count > maxLen) maxLen = count;
        }
        return maxLen;
    }
};