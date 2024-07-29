class Solution {
public:
    int dp[1001][4][3];
    int solve(vector<int> &rating, int i, int s, int prev, bool &flag) {
        if(s == 3) return 1;
        if(i == rating.size()) return 0;
        if(dp[i][s][flag] != -1) return dp[i][s][flag];
        int ans = 0;

        for(int j=i; j<rating.size(); j++) {
            if(s == 1) {
                if(prev < rating[j]) flag = true;
                else flag = false;
            }
            if(s == 0 || !flag && prev > rating[j] || flag && prev < rating[j]) ans += solve(rating, j+1, s+1, rating[j], flag);
        }
        return dp[i][s][flag] = ans;
    }
    int numTeams(vector<int>& rating) {
        memset(dp, -1, sizeof(dp));
        bool flag = false;
        return solve(rating, 0, 0, 0, flag);
    }
};
