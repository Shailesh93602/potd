//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool isCyclic(int n, vector<vector<int>> &edges) {
        // code here
        vector<vector<int>> adj(n);
        vector<int> res(n, 0);
        queue<int> q;
        
        for(auto e: edges) 
            adj[e[0]].push_back(e[1]);
        for(int i=0; i<n; i++) 
            for(int j: adj[i]) 
                res[j]++;
        for(int i=0; i<n; i++) 
            if(res[i] == 0) 
                q.push(i);
        
        int ans = 0;
        while(!q.empty()) {
            int i = q.front();
            q.pop();
            ans++;
            
            for(int j: adj[i]) {
                res[j]--;
                
                if(res[j] == 0) q.push(j);
            }
        }
        
        return ans != n;
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
        bool ans = obj.isCyclic(V, edges);
        if (ans)
            cout << "true\n";
        else
            cout << "false\n";
    }
    return 0;
}
// } Driver Code Ends
