class Solution {
public:
    bool judgeSquareSum(int c) {
        int i = 0;
        int j = sqrt(c);
        while(i <= j) {
            long long sum = 1LL*(i*i) + 1LL*(j*j);
            if(sum == c) return true;
            if(sum > c) j--;
            else i++;
        }
        return false;
    }
};
