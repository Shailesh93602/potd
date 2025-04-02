//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {\
    void solve(vector<vector<int>> &adj, int i, vector<bool> &visited, vector<int> &ans) {
        queue<int> q;
        visited[i] = true;
        q.push(i);
        
        while(!q.empty()) {
            int curr = q.front();
            q.pop();
            ans.push_back(curr);
            
            for(int x: adj[curr]) {
                if(!visited[x]) {
                    visited[x] = true;
                    q.push(x);
                }
            }
        }
    }
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
        int n = adj.size();
        vector<int> ans;
        vector<bool> visited(n, false);
        
        for(int i=0; i<n; i++)
            if(!visited[i]) 
                solve(adj, i, visited, ans);
                
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--) {
        int V;
        cin >> V;
        cin.ignore();
        // Use vector of vectors instead of array of vectors.
        vector<vector<int>> adj(V);

        for (int i = 0; i < V; i++) {
            string input;
            getline(cin, input);
            int num;
            vector<int> node;
            stringstream ss(input);
            while (ss >> num) {
                node.push_back(num);
            }
            adj[i] = node;
        }

        Solution obj;
        vector<int> ans = obj.bfs(adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
