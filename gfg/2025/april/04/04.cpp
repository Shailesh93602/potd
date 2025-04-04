//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
    bool solve(int i, vector<vector<int>> &adj, vector<bool> &visited, int x) {
        visited[i] = true;
        
        for(int j: adj[i]) {
            if(!visited[j]) {
                if(solve(j, adj, visited, i)) 
                    return true;
            }
            else if(j != x) return true;
        }
        
        return false;
    }
  public:
    bool isCycle(int n, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>> adj(n);
        vector<bool> visited(n, false);
        
        for(auto e: edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        
        for(int i=0; i<n; i++) 
            if(!visited[i]) 
                if(solve(i, adj, visited, -1)) 
                    return true;
            
        return false;
    }
};


//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--) {
        int V, E;
        cin >> V >> E;
        cin.ignore();
        vector<vector<int>> edges;
        for (int i = 1; i <= E; i++) {
            int u, v;
            cin >> u >> v;
            edges.push_back({u, v});
        }

        Solution obj;
        bool ans = obj.isCycle(V, edges);
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
