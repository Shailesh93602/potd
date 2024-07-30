//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

vector<vector<int>> visited(5, vector<int>(5, 0));
vector<string> ans;

class Solution {
  public:
    void solve(vector<vector<int>> &m, int x, int y, string dir, int n) {
        if(x == n-1 && y == n-1) {
            ans.push_back(dir);
            return;
        }
        if(m[x][y] == 0 || visited[x][y] == 1) return;
        
        visited[x][y] = 1;
        if(x > 0) solve(m, x-1, y, dir+'U', n);
        if(y > 0) solve(m, x, y-1, dir+'L', n);
        if(x < n-1) solve(m, x+1, y, dir+'D', n);
        if(y < n-1) solve(m, x, y+1, dir+'R', n);
        
        visited[x][y] = 0;
    }
    vector<string> findPath(vector<vector<int>> &mat) {
        // Your code goes here
        int n = mat.size();
        for(int i=0; i<n; i++) 
            for(int j=0; j<n; j++) 
                visited[i][j] = false;
        
        ans.clear();
        
        if(mat[0][0] == 0 || mat[n-1][n-1] == 0) return ans;
        
        solve(mat, 0, 0, "", n);
        
        sort(ans.begin(), ans.end());
        
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
