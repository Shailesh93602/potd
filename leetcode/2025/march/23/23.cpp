class Solution {
    int MOD = 1e9 + 7;
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int, int>>> adj(n);

        for (auto& road : roads) {
            adj[road[0]].push_back({ road[1], road[2] });
            adj[road[1]].push_back({ road[0], road[2] });
        }

        priority_queue<pair<long long, int>, vector<pair<long long, int>>,
                       greater<>>
            pq;
        vector<long long> dis(n, LLONG_MAX);
        vector<int> ans(n, 0);

        pq.push({0, 0});
        dis[0] = 0;
        ans[0] = 1;

        while (!pq.empty()) {
            auto [x, i] = pq.top();
            pq.pop();

            if (x > dis[i]) continue;

            for (auto& [j, y] : adj[i]) {
                if (x + y < dis[j]) { 
                    dis[j] = x + y;
                    ans[j] = ans[i]; 
                    pq.push({ x + y, j });
                } else if (x + y == dis[j]) ans[j] = (ans[j] + ans[i]) % MOD;
            }
        }

        return ans[n - 1];
    }
};
