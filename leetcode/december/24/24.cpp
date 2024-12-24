class Solution {
public:
    pair<int, int> helper(int n, vector<vector<int>> adj, int node) {
        vector<bool> visited(n, false);
        visited[node] = true;
        queue<int> q;
        q.push(node);

        int maxDis = 0, ans = node;

        while(!q.empty()) {
            int m = q.size();
            
            for(int i=0; i<m; i++) {
                int curr = q.front();
                q.pop();

                ans = curr;
                
                for(int x: adj[curr]) {
                    if(!visited[x]) {
                        visited[x] = true;
                        q.push(x);
                    }
                }
            }

            if(!q.empty()) maxDis++;
        }

        return { ans, maxDis };
    }
    int solve(int n, vector<vector<int>> adj) {
        auto [node, _] = helper(n, adj, 0);
        auto [_, ans] = helper(n, adj, node);

        return ans;
    }
    vector<vector<int>> buildAdj(int n, vector<vector<int>> edges) {
        vector<vector<int>> ans(n);

        if(n ==  0) return ans;

        for(auto e: edges) {
            ans[e[0]].push_back(e[1]);
            ans[e[1]].push_back(e[0]);
        }

        return ans;
    }
    int minimumDiameterAfterMerge(vector<vector<int>>& edges1, vector<vector<int>>& edges2) {
        int n = edges1.size() + 1, m = edges2.size() + 1;
        vector<vector<int>> adj1 = buildAdj(n, edges1);
        vector<vector<int>> adj2 = buildAdj(m, edges2);

        for(auto e: edges1) {
            adj1[e[1]].push_back(e[0]);
            adj1[e[0]].push_back(e[1]);
        }
        for(auto e: edges2) {
            adj2[e[1]].push_back(e[0]);
            adj2[e[0]].push_back(e[1]);
        }

        int ans1 = solve(n, adj1);
        int ans2 = solve(m, adj2);

        return max({ (ans1 + 1) / 2 + ( ans2 + 1 ) / 2 + 1, ans1, ans2});
    }
};
