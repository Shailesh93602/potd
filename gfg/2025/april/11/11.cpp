//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User Function Template
class Solution {
  public:
    vector<int> dijkstra(int n, vector<vector<int>> &edges, int src) {
        // Code here
        vector<vector<vector<int>>> adj(n);
        
        for(auto e: edges) {
            adj[e[0]].push_back({ e[1], e[2] });
            adj[e[1]].push_back({ e[0], e[2] });
        }
        
        priority_queue<int, vector<vector<int>>, greater<vector<int>>> pq;
        vector<int> ans(n, INT_MAX);
        
        pq.push({ 0, src });
        ans[src] = 0;
        
        while(!pq.empty()) {
            int i = pq.top()[1];
            pq.pop();
            
            for(auto x: adj[i]) {
                int j = x[0], k = x[1];
                
                if(ans[j] > ans[i] + k) {
                    ans[j] = ans[i] + k;
                    pq.push({ ans[j], j });
                }
            }
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
        int src;
        cin >> src;
        cin.ignore();

        Solution obj;
        vector<int> res = obj.dijkstra(V, edges, src);

        for (int i = 0; i < V; i++)
            cout << res[i] << " ";
        cout << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends
