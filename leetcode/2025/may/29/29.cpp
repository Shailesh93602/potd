class Solution {
    int dfs(int i, int j, int k, vector<vector<int>> &adj, vector<int> &col) {
        int ans = 1 - k % 2;
        col[i] = k % 2;

        for(int x: adj[i]) {
            if(x == j) continue;

            ans += dfs(x, i, k + 1, adj, col);
        }

        return ans;
    }
    vector<int> solve(const vector<vector<int>> &edges, vector<int> &col) {
        int n = edges.size() + 1;
        vector<vector<int>> adj(n);

        for(auto &edge: edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        int ans = dfs(0, -1, 0, adj, col);

        return { ans, n - ans };
    }
public:
    vector<int> maxTargetNodes(vector<vector<int>>& edges1, vector<vector<int>>& edges2) {
        int n = edges1.size() + 1, m = edges2.size() + 1;
        vector<int> col1(n), col2(m);
        vector<int> count1 = solve(edges1, col1),
                    count2 = solve(edges2, col2);

        vector<int> ans(edges1.size() + 1);

        for(int i=0; i<n; i++) 
            ans[i] = count1[col1[i]] + max(count2[0], count2[1]);

        return ans;
    }
};
