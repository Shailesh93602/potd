class Solution {
public:
    int sum = 0;
    int helper(vector<int> adj[], int node, vector<int> &vis, vector<int> &numEdges, int dis) {
        int ans = 0;
        sum += dis;
        vis[node] = 1;
        for(auto a: adj[node]) {
            if(!vis[a]) {
                ans += 1+helper(adj, a, vis, numEdges, dis+1);
                numEdges[node] = ans;
            }
        }
        return ans;
    }
    void dfs(vector<int> adj[], int node, int n, vector<int> &numEdges, vector<int> &vis, vector<int> &ans) {
        vis[node] = 1;
        for(auto a: adj[node]) {
            if(!vis[a]) {
                ans[a] = (ans[node] - numEdges[a] + n - 2 - numEdges[a]);
                dfs(adj, a, n, numEdges, vis, ans);
            }
        }
    }
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        vector<int> adj[n];
        for(int i=0; i<edges.size(); i++) {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }

        vector<int> numEdges(n, 0);
        vector<int> vis(n, 0);
        vector<int> ans(n, 0);
        helper(adj, 0, vis, numEdges, 0);
        ans[0] = sum;
        vector<int> vis1(n, 0);
        dfs(adj, 0, n, numEdges, vis1, ans);
        return ans;
    }
};
