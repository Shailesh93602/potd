class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = word.length();
        int x=0;

        while(x < n) {
            if(word[x++] == ch) break;
        }

        if(x == n && word[n-1] != ch) return word;
        string str = "";
        for(int i=x-1; i>=0; i--) str += word[i];
        for(int i=x; i<n; i++) str += word[i];

        return str;
    }
};
