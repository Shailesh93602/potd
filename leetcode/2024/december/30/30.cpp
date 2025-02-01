class Solution {
    int mod = 1000000007;
public:
    int countGoodStrings(int low, int high, int zero, int one) {
        vector<int> ans(high+1, 0);
        ans[0] = 1;

        for(int i=0; i<=high; i++) {
            if(ans[i] > 0) {
                if(i + zero <= high) 
                    ans[i + zero] = (ans[i+zero] + ans[i]) % mod;
                if(i + one <= high)
                    ans[i + one] = (ans[i+one] + ans[i]) % mod;
            }
        }

        int res = 0;
        for(int i=low; i<=high; i++) res = (res + ans[i]) % mod;

        return res;
    }
};
