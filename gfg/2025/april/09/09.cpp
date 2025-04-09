//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
    int timer = 1;
    void solve(vector<vector<int>> &adj, vector<int> &low,
                vector<int> &time, vector<bool> &visited, 
                vector<bool> &mark, int i, int j) {
    
        visited[i] = true;
        low[i] = time[i] = timer++;
        int k = 0;
        
        for(auto x: adj[i]) {
            if(x == j) continue;
            
            if(!visited[x]) {
                solve(adj, low, time, visited, mark, x, i);
                low[i] = min(low[i], low[x]);
                
                if(low[x] >= time[i] && j != -1) mark[i] = true;
                k++;
            }
            else low[i] = min(low[i], low[x]);
        }
        
        if(k > 1 && j == -1) mark[i] = true; 
    }
  public:
    vector<int> articulationPoints(int n, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>> adj(n);

        for(auto e: edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        
        vector<bool> visited(n, false), mark(n, 0);
        vector<int> low(n), time(n);
            
        for(int i=0; i<n; i++) 
            if(!visited[i])
                solve(adj, low, time, visited, mark, i, -1);
                
        vector<int> ans;
        for(int i=0; i<n; i++) 
            if(mark[i])
                ans.push_back(i);
        
        if(ans.empty()) return { -1 };
        
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> edges;
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            edges.push_back({u, v});
        }
        Solution obj;
        vector<int> ans = obj.articulationPoints(V, edges);
        sort(ans.begin(), ans.end());
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends
