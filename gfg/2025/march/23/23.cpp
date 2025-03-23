//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countWays(string &digits) {
        // Code here
        int n = digits.length();
        
        if(n == 0 || digits[0] == '0') return 0;
        
        int ans = 1, prev = 0;
        
        for(int i=1; i<=n; i++) {
            int count = 0;
            
            if(digits[i-1] !=  '0') count += ans;
            
            if(i > 1) {
                int temp = (digits[i-2] - '0') * 10 + (digits[i-1] - '0');
                
                if(temp >= 10 && temp <= 26) count += prev;
            }
            
            prev = ans;
            ans = count;
        }
        
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--) {
        string digits;
        getline(cin, digits);
        Solution obj;
        int ans = obj.countWays(digits);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends
