class Solution {
    vector<pair<int, int>> dirs = { { 1, 0 }, { -1, 0 }, { 0, 1 }, { 0, -1 }};
public:
    int minTimeToReach(vector<vector<int>>& moveTime) {
        int n = moveTime.size(), m = moveTime[0].size();
        vector<vector<int>> ans(n, vector<int>(m, INT_MAX));
        priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> pq;
        pq.push({ 0, 0, 0 });

        while(!pq.empty()) {
            auto [time, x, y] = pq.top();
            pq.pop();

            for(auto [dx, dy]: dirs) {
                int nx = x + dx, ny = y + dy;
                if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;

                int t = max(time, moveTime[nx][ny]) + 1;
                if(t >= ans[nx][ny]) continue;

                ans[nx][ny] = t;
                pq.push({ t, nx, ny });
            }
        }

        return ans[n-1][m-1];
    }
};
