//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string oddEven(string s) {
        // code here
       int x = 0, y = 0, i;
        int hash[100000] = {0};
        for (i = 0; i < s.length(); i++) hash[s[i] - 'a' + 1]++;
        for (i = 1; i <= 26; i++) {
            if (hash[i] != 0) {
                if (hash[i] % 2 == 0 && i % 2 == 0) x++;
                else if (hash[i] % 2 != 0 && i % 2 != 0) y++;
            }
        }
        if ((x + y) % 2 == 0) return "EVEN";
        
        return "ODD";
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string s;
        getline(cin, s);

        Solution obj;
        string res = obj.oddEven(s);

        cout << res << "\n";
    }
}

// } Driver Code Ends
