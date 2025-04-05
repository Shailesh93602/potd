//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
    int n, m;
    void solve(vector<vector<char>> &grid, int i, int j) {
        if(i < 0 || j < 0 || i >= n || j >= m || grid[i][j] != 'L') return;
        
        grid[i][j] = 'W';
        
        vector<vector<int>> dirs = {
            { 1, 0 },
            { -1, 0 },
            { 0, 1 },
            { 0, -1 },
            { 1, 1 },
            { -1, -1 },
            { 1, -1 },
            { -1, 1 }
        };
                
        for(auto dir: dirs) solve(grid, i + dir[0], j + dir[1]);
        
    }
  public:
    int countIslands(vector<vector<char>>& grid) {
        // Code here
        n = grid.size();
        m = grid[0].size();
        int ans = 0;
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(grid[i][j] == 'L') {
                    ans++;
                    solve(grid, i, j);
                }
            }
        }
        
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.countIslands(grid);
        cout << ans << '\n';

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends
