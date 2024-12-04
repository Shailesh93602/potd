//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> solve(string &s) {
        int n = s.length();
        vector<int> ans(n+1, 0);
        
        for(int i=1; i<n; i++) {
            int j = ans[i-1];
            while(j > 0 && s[i] != s[j]) j = ans[j-1];
            if(s[i] == s[j]) j++;
            ans[i] = j;
        }
        
        return ans;
    }
    // Function to check if two strings are rotations of each other or not.
    bool areRotations(string &s1, string &s2) {
        // Your code here
        vector<int> ans = solve(s1);
        s2 += s2;
        int n = s2.length(), m = s1.length();
        int i=0, j=0;
        
        while(i < n) {
            if(s2[i] == s1[j]) i++, j++;
            if(j == m) return true;
            else if(i < n && s2[i] != s1[j]) {
                if(j) j = ans[j-1];
                else i++;
            }
        }
        
        return false;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1;
        string s2;
        cin >> s1 >> s2;
        Solution sol;
        int result = sol.areRotations(s1, s2);
        if (result) {
            cout << "true" << endl;

        } else {
            cout << "false" << endl;
        }
        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends
