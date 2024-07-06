class Solution {
public:
    int passThePillow(int n, int time) {
        int ans = 0;
        if(time%(2*n-2) < n) ans = time%(2*n-2);
        else ans = 2*n-2 - time%(2*n-2);
        return ans + 1;
    }
};
