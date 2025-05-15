//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countSubstring(string &s) {
        // code here
        int n = s.length();
        
        vector<int> freq(26, 0);
        
        for(int i=0; i<n; i++) freq[s[i] - 'a']++;
        
        int ans = 0;
        
        for(int i=0; i<26; i++) ans += (freq[i] * (freq[i] + 1)) / 2;
        
        return ans;
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

        cout << ob.countSubstring(str) << "\n";

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends
