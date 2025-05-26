class Solution {
    int solve(int i, string& s, vector<vector<int>>& adj,
              vector<vector<int>>& count, vector<int>& visited) {
        if (!visited[i]) {
            visited[i] = 1;

            for (int x : adj[i]) {
                if (solve(x, s, adj, count, visited) == INT_MAX)
                    return INT_MAX;

                for (int j = 0; j < 26; j++)
                    count[i][j] = max(count[i][j], count[x][j]);
            }

            count[i][s[i] - 'a']++;
            visited[i] = 2;
        }

        if (visited[i] == 2)
            return count[i][s[i] - 'a'];

        return INT_MAX;
    }

public:
    int largestPathValue(string colors, vector<vector<int>>& edges) {
        int n = colors.length();
        vector<vector<int>> adj(n), count(n, vector<int>(26));
        vector<int> visited(n);

        for (auto& edge : edges)
            adj[edge[0]].push_back(edge[1]);

        int ans = 0;
        for (int i = 0; i < n && ans != INT_MAX; i++)
            ans = max(ans, solve(i, colors, adj, count, visited));

        if (ans == INT_MAX)
            return -1;

        return ans;
    }
};
