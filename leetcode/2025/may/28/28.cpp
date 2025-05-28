class Solution {
    int dfs(int i, int j, vector<vector<int>> &adj, int k) {
        if(k < 0) return 0;

        int ans = 1;
        for(int x: adj[i]) {
            if(x == j) continue;

            ans += dfs(x, i, adj, k - 1); 
        }

        return ans;
    }
    vector<int> solve(const vector<vector<int>> &edges, int k) {
        int n = edges.size() + 1;
        vector<vector<int>> adj(n);

        for(auto &edge: edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        vector<int> ans(n);
        for(int i=0; i<n; i++) ans[i] = dfs(i, -1, adj, k);

        return ans;
    }
public:
    vector<int> maxTargetNodes(vector<vector<int>>& edges1, vector<vector<int>>& edges2, int k) {
        int n = edges1.size() + 1, m = edges2.size() + 1;
        vector<int> count1 = solve(edges1, k),
                    count2 = solve(edges2, k - 1);
        int maxCount2 = *max_element(count2.begin(), count2.end());
        vector<int> ans(n);

        for(int i=0; i<n; i++) ans[i] = count1[i] + maxCount2;

        return ans;
    }
};
