//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int myAtoi(char *s) {
        // Your code here
        int sign = 1, ans = 0, i = 0;
        
        while(s[i] == ' ') i++;
        
        if(s[i] == '-' || s[i] == '+') if(s[i++] == '-') sign = -1;
        
        while(s[i] >= '0' && s[i] <= '9') {
            if(ans > INT_MAX/10 || ( ans == INT_MAX/10 && s[i] - '0' > 7))
                return sign == 1 ? INT_MAX : INT_MIN;
            
            ans *= 10;
            ans += s[i++] - '0';
        }
        
        return ans * sign;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        char s[20];
        cin >> s;
        Solution ob;
        int ans = ob.myAtoi(s);
        cout << ans << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends
