class Solution {
    int solve(vector<vector<int>> &events, int x) {
        int i = 0, j = events.size() - 1, ans = -1;

        while(i <= j) {
            int mid = i + (j - i) / 2;

            if(events[mid][1] < x) {
                ans = mid;
                i = mid + 1;
            } else j = mid - 1;
        }

        return ans;
    }
    vector<vector<int>> dp;
public:
    int maxValue(vector<vector<int>>& events, int k) {
        sort(events.begin(), events.end(), [](const vector<int> &a, const vector<int> &b) {
            return a[1] < b[1];
        });

        int n = events.size();
        vector<vector<int>> ans(n + 1, vector<int>(k + 1, 0));

        for(int i=1; i<=n; i++) {
            int prev = solve(events, events[i - 1][0]);

            for(int j=1; j<=k; j++) 
                ans[i][j] = max(ans[i-1][j], ans[prev + 1][j - 1] + events[i - 1][2]);
        }

        return ans[n][k];
    }
};
