class Solution {
    int MOD = 1e9 + 7;
public:
    int lengthAfterTransformations(string s, int t) {
        vector<int> counts(26, 0);
        
        for(char ch: s) counts[ch - 'a']++;

        while(t--) {
            vector<int> next(26);
            next[0] = counts[25];
            next[1] = (counts[25] + counts[0]) % MOD;

            for(int i=2; i<26; i++) next[i] = counts[i - 1];

            counts = move(next);
        }

        int ans = 0;
        for(int i=0; i<26; i++) ans = (ans + counts[i]) % MOD;

        return ans;
    }
};
