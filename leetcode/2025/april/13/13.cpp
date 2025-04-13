class Solution {
    static constexpr int MOD = 1000000007;

    long long findPower(long long x, long long y) {
        long long ans = 1;
        x %= MOD;

        while (y > 0) {
            if (y % 2 == 1)
                ans = (ans * x) % MOD;
            x = (x * x) % MOD;
            y /= 2;
        }

        return ans;
    }

public:
    int countGoodNumbers(long long n) {
        long long pos1 = (n + 1) / 2, pos2 = n / 2;
        long long ans = (findPower(5, pos1) * findPower(4, pos2)) % MOD;

        return static_cast<int>(ans);
    }
};
