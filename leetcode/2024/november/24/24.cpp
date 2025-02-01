class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long ans = 0;
        int last = INT_MAX;
        int isOdd = false;
        bool isZero = false;

        for(vector<int> x: matrix) {
            for(int i: x) {
                if(i == 0) isZero = true;
                else {
                    if(i < 0) isOdd = !isOdd;
                    last = min(last, abs(i));
                    ans += abs(i);
                }
            }
        }

        if(isOdd && !isZero) ans -= abs(2 * last);

        return ans;
    }
};
