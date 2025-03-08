//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string longestPalindrome(string &s) {
        // code here
        int n = s.length();
        if(n == 0) return "";
        
        int x = 0, maxLen = 1;
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<=1; j++) {
                int low = i, high = i + j;
                
                while(low >= 0 && high < n && s[low] == s[high]) {
                    int currLen = high - low + 1;
                    
                    if(currLen > maxLen) {
                        x = low;
                        maxLen = currLen;
                    }
                    
                    low--;
                    high++;
                }
            }
        }
        
        return s.substr(x, maxLen);
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
        cout << ob.longestPalindrome(S) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends
