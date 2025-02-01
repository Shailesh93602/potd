//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Matrix {
  public:
    template <class T>
    static void input(vector<vector<T>> &A, int n, int m) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d ", &A[i][j]);
            }
        }
    }

    template <class T>
    static void print(vector<vector<T>> &A) {
        for (int i = 0; i < A.size(); i++) {
            for (int j = 0; j < A[i].size(); j++) {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
};


// } Driver Code Ends

class Solution {
  public:
    void dfs(int v, int &vertices, int &edges, vector<vector<int>> &adj,
        vector<int> &visited) {
        visited[v] = 1;
        vertices++;             
        edges += adj[v].size(); 
        for (auto to : adj[v]) {
            if (!visited[to]) dfs(to, vertices, edges, adj, visited);
        }
    }
    int findNumberOfGoodComponent(int e, int v, vector<vector<int>> &edges) {
        // code here
        vector<vector<int>> adj(v + 1, vector<int>());

        for (auto i : edges) {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }

        int ans = 0;
        vector<int> visited(v + 1, 0);

        for (int i = 1; i <= v; i++) {
            if (!visited[i]) {
                int vertices = 0, edges = 0;
                dfs(i, vertices, edges, adj, visited);
                edges /= 2;
                if (edges == (vertices * (vertices - 1)) / 2)
                    ans++;
            }
        }
        return ans;

    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int e;
        scanf("%d", &e);

        int v;
        scanf("%d", &v);

        vector<vector<int>> edges(e, vector<int>(2));
        Matrix::input(edges, e, 2);

        Solution obj;
        int res = obj.findNumberOfGoodComponent(e, v, edges);

        cout << res << endl;
    }
}

// } Driver Code Ends
