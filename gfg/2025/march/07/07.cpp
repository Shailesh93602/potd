//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int longestPalinSubseq(string &s) {
        // code here
        int n = s.size();
        vector<int> ans(n), prev(n);
        
        for(int i=n-1; i>=0; i--) {
            ans[i] = 1;
            
            for(int j=i+1; j<n; j++) {
                if(s[i] == s[j]) ans[j] = prev[j-1] + 2;
                else ans[j] = max(prev[j], ans[j-1]);
            }
            
            prev = ans;
        }
        
        return ans[n-1];
    }
};


//{ Driver Code Starts.

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends
