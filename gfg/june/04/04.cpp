//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string binaryNextNumber(string s) {
        // code here.
        int i;
        int n = s.length();
        string ans = "";
        
        for (i=n-1; i>=0; i--) {
            if (s[i] == '1') s[i] = '0';
            else {
                s[i] = '1';
                break;
            }
        }
        if (i < 0) {
            ans += '1';
            i = 0;
        }
        else {
            i = 0;
            while (s[i] == '0') i++;
        }
        
        ans += s.substr(i, n);

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
        cout << ob.binaryNextNumber(s);
        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends
