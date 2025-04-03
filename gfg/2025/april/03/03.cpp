//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
    bool check(int i, int j, int n, int m) {
        return (i >= 0 && i < n && j >= 0 && j < m);
    }
  public:
    int orangesRotting(vector<vector<int>>& mat) {
        // Code here
        int n = mat.size(), m = mat[0].size();
        vector<vector<int>> dirs = { 
            { 1, 0 }, 
            { 0, 1 }, 
            { -1, 0 }, 
            { 0, -1 } 
        };
        queue<vector<int>> q;
        
        for(int i=0; i<n; i++) 
            for(int j=0; j<m; j++) 
                if(mat[i][j] == 2) 
                    q.push({ i, j });
            
        int ans = 0;
        
        while(!q.empty()) {
            ans++;
            
            int size = q.size();
            while(size--) {
                vector<int> curr = q.front();
                q.pop();

                for(auto dir: dirs) {
                    int x = curr[0] + dir[0], y = curr[1] + dir[1];
                    
                    if(check(x, y, n, m) && mat[x][y] == 1) {
                        mat[x][y] = 2;
                        q.push({ x, y });
                    }
                }
            }
        }
        
        for(int i=0; i<n; i++) 
            for(int j=0; j<m; j++) 
                if(mat[i][j] == 1) 
                    return -1;
        
        return max(0, ans - 1);
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> mat(n, vector<int>(m, -1));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> mat[i][j];
            }
        }
        Solution obj;
        int ans = obj.orangesRotting(mat);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends
