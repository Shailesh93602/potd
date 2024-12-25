//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        // code here
        int n = mat.size(), m = mat[0].size();
        bool flag = false;
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(mat[i][j] == 0) {
                    mat[i][0] = 0;
                    
                    if(j == 0) flag = true;
                    else mat[0][j] = 0;
                }
            }
        }
        
        for(int i=1; i<n; i++) 
            for(int j=1; j<m; j++) 
                if(mat[i][0] == 0 || mat[0][j] == 0) 
                    mat[i][j] = 0;

        if(mat[0][0] == 0) for(int j=0; j<m; j++) mat[0][j] = 0;
        if(flag) for(int i=0; i<n; i++) mat[i][0] = 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > arr(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        ob.setMatrixZeroes(arr);
        for (auto x : arr) {
            for (auto y : x)
                cout << y << " ";
            cout << endl;
        }

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends
