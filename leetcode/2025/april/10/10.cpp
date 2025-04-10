class Solution {
    long long solve(string x, string s, int limit) {
        int n = x.length(), m = s.length();
        if(n < m) return 0;

        if(n == m) return x >= s;

        string temp = x.substr(n - m, m);
        long long ans = 0;

        for(int i=0; i<n-m; i++) {
            if(limit < (x[i] - '0')) 
                return ans + (long)pow(limit + 1, n - m - i);
            
            ans += (long)(x[i] - '0') * (long)pow(limit + 1, n - m - i - 1);
        }
            
        if(temp >= s) ans++;

        return ans;
    }
public:
    long long numberOfPowerfulInt(long long start, long long finish, int limit, string st) {
        string s = to_string(start - 1), f = to_string(finish);
        return solve(f, st, limit) - solve(s, st, limit);
    }
};
