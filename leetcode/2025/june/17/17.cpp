const int MOD = 1e9 + 7;
class Solution {
    static inline long long solve(long long x, int exp, int mod=MOD) {
        if(exp == 0) return 1;
        int y = (exp&1) ? x : 1;

        return solve(x * x % mod, exp >> 1) * y % mod;
    }
    static inline int modInv(int a, int b=MOD) {
        int x0 = 1, x1 = 0, r0 = a, r1 = b;

        while(r1 != 0) {
            int q = r0/r1, rr = r1, xx = x1;
            r1 = r0 - q * r1;
            x1 = x0 - q * x1;
            r0 = rr;
            x0 = xx;
        }

        if(x0 < 0) x0 += b;

        return x0;
    }
    static long long comb(int n, int k) {
        if(n < 2*k) return comb(n, n - k);

        long long d = 1;
        for(int i=1; i<=k; i++) {
            d *= i;
            if(d > MOD) d %= MOD;
        }

        long long ans = modInv(d);
        for(int i=n; i>=n-k+1; i--) {
            ans *= i;
            if(ans > MOD) ans %= MOD;
        }

        return ans;
    }
public:
    int countGoodArrays(int n, int m, int k) {
       return m * solve(m - 1, n - k - 1) % MOD * comb(n - 1, k) % MOD; 
    }
};
