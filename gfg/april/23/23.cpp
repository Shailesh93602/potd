//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int mod = 1000000007;
    int firstElement(int n) {
        // code here
        int a = 0;
        int b = 1;
        int c;
        
        if(n == 0) return a;
        
        for(int i=2; i<=n; i++) {
            c = (a+b)%mod;
            a = b%mod;
            b = c%mod;
        }
        
        return b%mod;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.firstElement(n) << endl;
    }
    return 0;
}

// } Driver Code Ends
