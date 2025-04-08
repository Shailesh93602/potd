//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
    void solve(vector<vector<int>> &adj, vector<bool> &visited, int c) {
        visited[c] = true;
        
        for(auto i: adj[c]) if(!visited[i]) solve(adj, visited, i);
            
    }
  public:
    bool isBridge(int n, vector<vector<int>> &edges, int c, int d) {
        // Code here
        vector<vector<int>> adj(n);
        
        for(auto e: edges) {
            if((e[0] == c && e[1] == d) || (e[1] == c && e[0] == d)) continue;
            
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        
        vector<bool> visited(n, false);
        solve(adj, visited, c);
        
        return !visited[d];
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        vector<vector<int>> edges(E);
        int i = 0;
        while (i++ < E) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
            edges[i - 1].push_back(u);
            edges[i - 1].push_back(v);
        }

        int c, d;
        cin >> c >> d;

        Solution obj;
        bool l = obj.isBridge(V, edges, c, d);
        if (l)
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends
