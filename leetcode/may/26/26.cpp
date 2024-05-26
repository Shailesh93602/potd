class Solution {
public:
    const long long mod = 1e9+7;
    int checkRecord(int n) {
        if(n == 1) return 3;

        vector<int> f(n+1), g(n+1);
        f[0] = g[0] = 1;
        f[1] = 3;
        f[2] = 8;
        g[1] = 2;
        g[2] = 4;
        for(int i=3; i<=n; i++) {
            g[i] = ((g[i-1]+g[i-2])%mod + g[i-3]) % mod;
            f[i] = (((f[i-1]+f[i-2])%mod + f[i-3])%mod + g[i])%mod;
        }

        return f[n];
    }
};
