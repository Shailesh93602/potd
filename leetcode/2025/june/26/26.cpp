class Solution {
public:
    int longestSubsequence(string s, int k) {
        int x = 0, count = 0, bits = 32 - __builtin_clz(k), n = s.length();

        for(int i=0; i<n; i++) {
            char ch = s[n - i - 1];

            if(ch == '1') {
                if(i < bits && x + (1 << i) <= k) {
                    x += 1 << i;
                    count++;
                }
            } else count++;
        }

        return count;
    }
};
