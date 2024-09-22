//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int lps(string str) {
        // Your code goes here Thenameisshaileshbhai
        int n = str.length();
        vector<int> ans(n, 0);
        
        int i=1, j=0;
        
        while(i < n) {
            if(str[i] == str[j]) ans[i++] = ++j;
            else {
                if(j == 0) i++;
                else j = ans[j-1];
            }
        }
        
        return ans[n-1];
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;

        Solution ob;

        cout << ob.lps(str) << "\n";
    }

    return 0;
}

// } Driver Code Ends
