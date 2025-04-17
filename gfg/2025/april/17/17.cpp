//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
    int solve(int n, vector<vector<vector<int>>> &adj, int i, int j) {
        vector<int> ans(n, INT_MAX);
        ans[i] = 0;
        
        priority_queue<pair<int, int>> pq;
        pq.push({ 0, i });
        
        while(!pq.empty()) {
            auto top = pq.top();
            pq.pop();
            int d = top.first, u = top.second;
        
            if(d <= ans[u]) {
                for(auto x: adj[u]) {
                    if((u == i && x[0] == j) || (u == j && x[0] == i)) continue;
                    
                    if(ans[x[0]] > ans[u] + x[1]) {
                        ans[x[0]] = ans[u] + x[1];
                        pq.push({ ans[x[0]], x[0] });
                    }
                }
            }
        }
        
        return ans[j];
    }
  public:
    int findMinCycle(int n, vector<vector<int>>& edges) {
        // code here
        vector<vector<vector<int>>> adj(n);
        int ans = INT_MAX;
        
        for(auto &e: edges) {
            adj[e[0]].push_back({ e[1], e[2] });
            adj[e[1]].push_back({ e[0], e[2] });
        }
        
        for(auto &e: edges) {
            int res = solve(n, adj, e[0], e[1]);
        
            if(res != INT_MAX) ans = min(ans, res + e[2]);
        }
        
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> edges;
        int i = 0;
        while (i++ < E) {
            int u, v, w;
            cin >> u >> v >> w;
            edges.push_back({u, v, w});
            edges.push_back({v, u, w});
        }

        Solution obj;
        int res = obj.findMinCycle(V, edges);

        cout << res << endl;
    }

    return 0;
}
// } Driver Code Ends
