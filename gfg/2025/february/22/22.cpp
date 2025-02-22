//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxLength(string& s) {
        // code here
        int ans = 0, i=0, j=0;
        
        for(char ch: s) {
            if(ch == '(') i++;
            else if(ch == ')') j++;
            
            if(i == j) ans = max(ans, i + j);
            else if(j > i) i = j = 0;
        }
        
        i = j = 0;
        for(int k=s.length()-1; k>=0; k--) {
            if(s[k] == '(') i++;
            else if(s[k] == ')') j++;
            
            if(i == j) ans = max(ans, i + j);
            else if(i > j) i = j = 0;
        }
        
        return ans;
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

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends
