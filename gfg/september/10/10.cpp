//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int find(int u, vector<int> &parent) {
        if(u != parent[u])
            parent[u] = find(parent[u], parent);
        return parent[u];
    }
    void unite(int u, int v, vector<int> &parent, vector<int> &rank) {
        int rootU = find(u, parent);
        int rootV = find(v, parent);
        
        if(rootU != rootV) {
            if(rank[rootU] > rank[rootV]) parent[rootV] = rootU;
            else if(rank[rootU] < rank[rootV]) parent[rootU] = rootV;
            else {
                parent[rootV] = rootU;
                rank[rootU]++;
            }
        }
    }
    int isCircle(vector<string> &arr) {
        // code here
        vector<int> inDegree(26, 0);
        vector<int> outDegree(26, 0);
        vector<int> parent(26);
        vector<int> rank(26, 0);
        
        iota(parent.begin(), parent.end(), 0);
        
        for(string &s: arr) {
            int a = s.front() - 'a';
            int b = s.back() - 'a';
            
            unite(a, b, parent, rank);
            
            outDegree[a]++;
            inDegree[b]++;
        }
        
        for(int i=0; i<26; i++) 
            if(inDegree[i] != outDegree[i])
                return 0;
                
        int component = -1;
        for(int i=0; i<26; i++) {
            if(inDegree[i] > 0 || outDegree[i] > 0) {
                int root = find(i, parent);
                if(component == -1) component = root;
                else if(component != root) return 0;
            }
        }
        
        return 1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> A;
        string s;

        for (int i = 0; i < N; i++) {
            cin >> s;
            A.push_back(s);
        }

        Solution ob;
        cout << ob.isCircle(A) << endl;
    }
    return 0;
}
// } Driver Code Ends
