//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int solve(vector<vector<int>> &grid, int i, int j, int index) {
        int n = grid.size();
        if(i<0 || i>=n || j<0 || j>=n || grid[i][j] != 1) return 0;
        
        grid[i][j] = index;
        return  1 + solve(grid, i+1, j, index) 
                  + solve(grid, i-1, j, index)
                  + solve(grid, i, j+1, index)
                  + solve(grid, i, j-1, index);
    }
    
    void findNeighbours(vector<vector<int>> &grid, int i, int j, set<int> &s) {
        int n = grid.size();
        if(i > 0) s.insert(grid[i-1][j]);
        if(j > 0) s.insert(grid[i][j-1]);
        if(i < n-1) s.insert(grid[i+1][j]);
        if(j < n-1) s.insert(grid[i][j+1]);
    }
    int MaxConnection(vector<vector<int>>& grid) {
        // code here
        int n = grid.size();
        int ans = 0;
        int index = 2;
        int count;
        
        unordered_map<int, int> area;
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(grid[i][j]) {
                    area[index] = solve(grid, i, j, index);
                    ans = max(ans, area[index++]);
                }
            }
        }
         
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(!grid[i][j]) {
                    set<int> s;
                    findNeighbours(grid, i, j, s);
                    count = 1;
                    for(int x: s) count += area[x];
                    
                    ans = max(ans, count);
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
        int n;
        cin >> n;
        vector<vector<int>> grid(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> grid[i][j];
            }
        }

        Solution obj;
        cout << obj.MaxConnection(grid) << "\n";
    }
}

// } Driver Code Ends
