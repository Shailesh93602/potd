class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int n = str1.length(), m = str2.length();
        char y = str2[0];
        int i, j;

        for(i=0, j=0; i<n && j < m; i++) {
            char x = str1[i];

            if(x == y || x + 1 == y || (x == 'z' && y == 'a')) 
                y = str2[++j];
        }

        return j == m;
    }

};
