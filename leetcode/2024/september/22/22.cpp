class Solution {
public:
    int solve(int n, long i, long j) {
        int count = 0;

        while(i <= n) {
            count += min((long)(n+1), j) - i;
            i *= 10;
            j *= 10;
        }

        return count;
    }
    int findKthNumber(int n, int k) {
        // Thenameisshaileshbhai
        int ans = 1;
        k--;

        while(k > 0) {
            int temp = solve(n, ans, ans+1);
            if(temp <= k) {
                ans++;
                k -= temp;
            }
            else {
                ans *= 10;
                k--;
            }
        }

        return ans;
    }
};
