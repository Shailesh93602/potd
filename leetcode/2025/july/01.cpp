class Solution {
public:
    int possibleStringCount(string word) {
        int ans = 1;

        for(int i=1; i<word.length(); i++) if(word[i - 1] == word[i]) ans++;

        return ans;
    }
};
