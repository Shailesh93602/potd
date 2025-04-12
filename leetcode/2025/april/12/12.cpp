class Solution {
public:
    long long countGoodIntegers(int n, int k) {
        unordered_set<string> s;
        int base = pow(10, (n-1) / 2), skip = n & 1;

        for(int i=base; i<base*10; i++) {
            string st = to_string(i);
            st += string(st.rbegin() + skip, st.rend());
            long long temp = stoll(st);

            if(temp % k == 0) {
                sort(st.begin(), st.end());
                s.emplace(st);
            }
        }

        vector<long long> fact(n + 1, 1);
        long long ans = 0;

        for(int i=1; i<=n; i++) fact[i]= fact[i-1] * i;
        for(string st: s) {
            vector<int> count(10);
            for(char ch: st) count[ch - '0']++;

            long long total = (n - count[0]) * fact[n-1];
            for(int x: count) total /= fact[x];
            ans += total;
        }

        return ans;
    }
};
