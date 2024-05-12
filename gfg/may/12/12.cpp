//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minSteps(int d) {
        // code here
        int ans = ceil(sqrt(2 * abs(d) + 0.25) - 0.5);

        if (d % 2 == 0) {
            if (ans % 4 == 1) ans += 2;
            if (ans % 4 == 2) ans++;
        }
        else {
            if (ans % 4 == 3) ans += 2;
            if (ans % 4 == 0) ans++;
        }

        return ans;

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int d;
        cin >> d;

        Solution ob;
        cout << ob.minSteps(d) << "\n";
    }
    return 0;
}
// } Driver Code Ends
