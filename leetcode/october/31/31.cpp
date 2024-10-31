class Solution {
public:
    long long minimumTotalDistance(vector<int>& robot, vector<vector<int>>& factory) {
        sort(robot.begin(), robot.end());
        sort(factory.begin(), factory.end());

        int n = robot.size();
        int m = factory.size();
        vector<vector<long long>> dp(n+1, vector<long long>(m+1));

        for(int i=0;i<n; i++) dp[i][m] = LLONG_MAX;

        for(int i=m-1; i>=0; i--) {
            long long prefix = 0;
            deque<pair<int, long long>> dq;
            dq.push_back({ n, 0 });

            for(int j=n-1; j>=0; j--) {
                prefix += abs(robot[j] - factory[i][0]);

                while(!dq.empty() && dq.front().first > j+ factory[i][1]) dq.pop_front();

                while(!dq.empty() && dq.back().second >= dp[j][i+1] - prefix) dq.pop_back();

                dq.push_back({ j, dp[j][i+1] - prefix});
                dp[j][i] = dq.front().second + prefix;
            }
        }

        return dp[0][0];
    }
};
