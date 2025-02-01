//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int maxLength(string s) {
        // code here
        if(s.length() <= 1) return 0;
        
        int maxVal = 0;
        vector<int> longest(s.size(), 0);
        
        for(int i=1; i<s.length(); i++) {
            if(s[i] == ')' && i-longest[i-1]-1 >= 0 && s[i-longest[i-1]-1] == '(') {
                longest[i] = longest[i-1] + 2
                            + ((i - longest[i-1]-2 >= 0)
                            ? longest[i-longest[i-1]-2] : 0);
                maxVal = max(longest[i], maxVal);
            }
        }
        
        return maxVal;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;

        Solution ob;
        cout << ob.maxLength(S) << "\n";
    }
    return 0;
}
// } Driver Code Ends
