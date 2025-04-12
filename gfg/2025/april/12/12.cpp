//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int newColor) {
        // Code here
        if(image[sr][sc] == newColor) return image;
        
        vector<vector<int>> dirs = {
            { 0, 1 },
            { 1, 0 },
            { 0, -1 },
            { -1, 0 }
        };
        queue<vector<int>> q;
        q.push({ sr, sc });
        int temp = image[sr][sc];
        image[sr][sc] = newColor;

        while(!q.empty()) {
            vector<int> x = q.front();
            q.pop();
            
            for(vector<int> dir: dirs) {
                int i = x[0] + dir[0], j = x[1] + dir[1];
                
                if(i >= 0 && i < image.size() && j >= 0 
                    && j < image[0].size() && image[i][j] == temp) {
                    image[i][j] = newColor;
                    q.push({ i, j });
                }
            }
        }
        
        return image;   
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> image(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                cin >> image[i][j];
        }
        int sr, sc, newColor;
        cin >> sr >> sc >> newColor;
        Solution obj;
        vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
        for (auto i : ans) {
            for (auto j : i)
                cout << j << " ";
            cout << "\n";
        }

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends
