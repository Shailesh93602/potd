//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {

  public:
    int lcs(string s1, string s2, int n, int m) {
        int temp[n + 1][m + 1];
    
        for (int i=0; i<=n; i++) {
            for (int j=0; j<=m; j++) {
                if (i == 0 || j == 0) temp[i][j] = 0;
                else if (s1[i - 1] == s2[j - 1]) temp[i][j] = temp[i - 1][j - 1] + 1;
                else temp[i][j] = max(temp[i - 1][j], temp[i][j - 1]);
            }
        }
        
        return temp[n][m];
    }
    int findMinCost(string x, string y, int costX, int costY) {
        // Your code goes here
        int n = x.length();
        int m = y.length();
    
        vector<vector<int>> dp(n, vector<int>(m, -1));

        int len_LCS = lcs(x, y, n, m);

        return costX * (n - len_LCS) + costY * (m - len_LCS);
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        string x, y;
        cin >> x >> y;

        int costX, costY;
        cin >> costX >> costY;

        Solution ob;
        cout << ob.findMinCost(x, y, costX, costY);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
