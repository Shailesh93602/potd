//{ Driver Code Starts
/* Driver program to test above function */

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> solve(string s) {
        int n = s.length();
        vector<int> ans(n);
        
        int i=1, j=0;
        ans[0] = 0;
        
        while(i < n) {
            if(s[i] == s[j]) ans[i++] = ++j;
            else if(j != 0) j = ans[j-1];
            else ans[i++] = 0;
        }
        
        return ans;
    }
    int minChar(string& s) {
        // Write your code here
        string ans = s;
        reverse(ans.begin(), ans.end());
        
        string concat = s + '$' + ans;
        vector<int> res = solve(concat);
        
        return s.length() - res.back();
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.minChar(str);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends
