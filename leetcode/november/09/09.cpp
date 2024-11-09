class Solution {
public:
    long long minEnd(int n, int x) {
        long long ans = x;
        n--;

        for(long long i = 1; n>0; i <<= 1) {
            if((i & x) == 0) {
                ans |= (n & 1) * i;
                n >>= 1;
            }
        }

        return ans;
    }
};
