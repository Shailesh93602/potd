//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution {
    void solve(string &s, int i, string &ans, int k) {
        int n = s.length();
        if(k == 0 || i == n - 1) {
            if(s > ans) ans = s;
            return;
        }
        
        int maxDig = 0;
        
        for(int j=i; j<n; j++) maxDig = max(maxDig, s[j] - '0');
        
        if(s[i] - '0' == maxDig) {
            solve(s, i+1, ans, k);
            return;
        }
        
        for(int j=i+1; j<n; j++) {
            if(s[j] - '0' == maxDig) {
                swap(s[i], s[j]);
                solve(s, i+1, ans, k-1);
                swap(s[i], s[j]);
            }
        }
    }
  public:
    // Function to find the largest number after k swaps.
    string findMaximumNum(string& s, int k) {
        // code here.
        string ans = s;
        solve(s, 0, ans, k);
        
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t, k;
    string str;

    cin >> t;
    while (t--) {
        cin >> k >> str;
        Solution ob;
        cout << ob.findMaximumNum(str, k) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends
