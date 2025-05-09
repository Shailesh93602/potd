class Solution {
    const int MOD = 1e9 + 7;
    vector<long long> fact, inv, invFact;

    void solve(int n) {
        fact.assign(n + 1, 1);
        for(int i=1; i<=n; i++) fact[i] = (fact[i-1] * i) % MOD;

        inv.assign(n + 1, 1);
        for(int i=2; i<=n; i++) inv[i] = MOD - (MOD / i) * inv[MOD % i] % MOD;

        invFact.assign(n + 1, 1);
        for(int i=1; i<=n; i++) invFact[i] = invFact[i-1] * inv[i] % MOD;
    }
public:
    int countBalancedPermutations(string num) {
        int n = num.length(), sum = 0;
        
        for(char ch: num) sum += ch - '0';

        if(sum%2 != 0) return 0;

        solve(n);

        int halfSum = sum/2, halfLen = n/2;
        vector<vector<int>> res(halfSum + 1, vector<int>(halfLen + 1));
        res[0][0] = 1;
        
        vector<int> counts(10);
        for(char ch: num) {
            int temp = ch - '0';
            counts[temp]++;

            for(int i=halfSum; i>=temp; i--) 
                for(int j=halfLen; j>0; j--) 
                    res[i][j] = (res[i][j] + res[i-temp][j-1]) % MOD;
        }

        long long ans = res[halfSum][halfLen];
        ans = ans * fact[halfLen] % MOD * fact[n-halfLen] % MOD;

        for(int i: counts) ans = ans * invFact[i] % MOD;

        return ans;
    }
};
