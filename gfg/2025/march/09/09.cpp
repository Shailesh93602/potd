//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int countPS(string &s) {
        // code here
        int n = s.length(), ans = 0;
        vector<vector<bool>> visited(n, vector<bool>(n, false));
        
        for(int i=0; i<n; i++) visited[i][i] = true;
        
        for(int i=0; i<n-1; i++) {
            if(s[i] == s[i+1]) {
                visited[i][i+1] = true;
                ans++;
            }
        }
        
        for(int k=2; k<n; k++) {
            for(int i=0; i<n-k; i++) {
                int j = i+k;
                
                if(s[i] == s[j] && visited[i+1][j-1]) {
                    visited[i][j] = true;
                    ans++;
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
        string s;
        cin >> s;
        Solution ob;
        cout << ob.countPS(s) << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends
