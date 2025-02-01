//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int editDistance(string str1, string str2) {
        // Code here
        int m = str1.size();
        int n = str2.size();
        
        vector<int> prev(n+1, 0);
        vector<int> curr(n+1, 0);
        
        for(int j=0; j<=n; j++) prev[j] = j;
        
        for(int i=1; i<=m; i++) {
            curr[0] = i;
            for(int j=1; j<=n;j++) {
                if(str1[i-1] == str2[j-1]) curr[j] = prev[j-1];
                else {
                    int minVal = min(1+prev[j], 1+curr[j-1]);
                    curr[j] = min(minVal, 1+prev[j-1]);
                }
            }
            prev = curr;
        }

        return prev[n];
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
