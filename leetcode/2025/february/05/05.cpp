class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int x = 0, y = 0, count = 0;

        for(int i=0; i<s1.size(); i++) {
            if(s1[i] != s2[i]) {
                count++;

                if(count > 2) return false;
                else if(count == 1) x = i;
                else y = i;
            }
        }

        return s1[x] == s2[y] && s1[y] == s2[x];
    }
};
