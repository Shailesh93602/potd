class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.length(), ans = 0;
        vector<int> lastPos = { -1, -1, -1 };

        for(int i=0; i<n; i++) {
            lastPos[s[i] - 'a'] = i;
            ans += 1 + min({ lastPos[0], lastPos[1], lastPos[2] });
        }

        return ans;
    }
};
