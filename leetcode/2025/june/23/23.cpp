class Solution {
    bool isPalindrome(long long ans, int x) {
        vector<int> digits;

        while(ans > 0) {
            digits.push_back(ans % x);
            ans /= x;
        }

        int i=0, j=digits.size() - 1;
        while(i < j) if(digits[i++] != digits[j--]) return false;

        return true;
    }
    long long solve(long long ans, bool odd) {
        long long x = ans;

        if(odd) x /= 10;

        while(x > 0) {
            ans = ans * 10 + x % 10;
            x /= 10;
        }

        return ans;
    }
public:
    long long kMirror(int k, int n) {
        long long ans = 0;

        for (long long i=1; n>0; i*=10) {
            for (long long j=i; n>0 && j<i*10; j++) {
                long long p = solve(j, true);

                if (isPalindrome(p, k)) {
                    ans += p;
                    n--;
                }
            }
            for (long long j=i; n > 0 && j<i*10; j++) {
                long long p = solve(j, false);

                if (isPalindrome(p, k)) {
                    ans += p;
                    n--;
                }
            }
        }

        return ans;
    }
};
