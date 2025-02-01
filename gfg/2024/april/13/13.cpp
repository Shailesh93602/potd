//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long reversedBits(long long x) {
        // code here
        string ans = "";
        while(x > 0) {
            int rem = x%2;
            ans += to_string(rem);
            x /= 2;
        }
        
        while(ans.length() != 32) ans += to_string(0);
        
        long long res = 0;
        long long idx = 0;
        for(int i=ans.length()-1; i>=0; i--) {
            res = res + (ans[i]-'0')*pow(2, idx++);
        }
        
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
// } Driver Code Ends
