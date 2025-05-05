class Solution {
    const int mod = 1e9 + 7;
public:
    int numTilings(int n) {
        vector<int> ans = { 1, 1, 2 };

        if(n < 3) return ans[n];

        for(int i=3; i<=n; i++) {
            long long x = (2LL * ans[2] + ans[0]) % mod;
            ans = { ans[1], ans[2], (int)x };
        }

        return ans[2];
    }
};
