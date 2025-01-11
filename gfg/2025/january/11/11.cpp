//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        int n = s.length(), count = 0;
        vector<int> map(26, -1);
        int i=0;
        
        for(int j=0; j<n; j++) {
            i = max(i, map[s[j] - 'a'] + 1);
            
            count = max(count, j - i + 1);
            
            map[s[j] - 'a'] = j;
        }
        
        return count;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        Solution obj;
        string s;
        cin >> s;
        cout << obj.longestUniqueSubstr(s) << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends
