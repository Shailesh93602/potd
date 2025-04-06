//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
    void solve(int i, vector<vector<int>> &adj, vector<bool> &visited, vector<int> &ans) {
        visited[i] = true;
        
        for(int e: adj[i])
            if(!visited[e])
                solve(e, adj, visited, ans);
                
        ans.push_back(i);
    }
  public:
    vector<int> topoSort(int n, vector<vector<int>>& edges) {
        // code here
        vector<bool> visited(n, false);
        vector<vector<int>> adj(n);
        vector<int> ans;
        
        for(auto e: edges) {
            adj[e[0]].push_back(e[1]);
        }
        
        for(int i=0; i<n; i++)
            if(!visited[i])
                solve(i, adj, visited, ans);
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};


//{ Driver Code Starts.

int check(int V, vector<int> &res, vector<vector<int>> adj) {

    if (V != res.size())
        return 0;

    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v])
                return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int V, E;
        cin >> V >> E;

        vector<vector<int>> adj(V);
        vector<vector<int>> edges;

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            edges.push_back({u, v});
        }

        Solution obj;
        vector<int> res = obj.topoSort(V, edges);
        bool ans = check(V, res, adj);
        if (ans)
            cout << "true\n";
        else
            cout << "false\n";
        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends
