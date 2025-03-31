//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxPartitions(string &s) {
        // code here
        vector<int> start(26, -1), end(26, -1);
        int n = s.length(), j = 0, ans = 0;
        
        for(int i=0; i<n; i++) {
            if(start[s[i] - 'a'] == -1) start[s[i] - 'a'] = i;
            
            end[s[i] - 'a'] = i;
        }
        
        for(int i=0; i<n; i++) {
            j = max(j, end[s[i] - 'a']);
            
            if(i == j) ans++;
        }
        
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;

    for (int i = 0; i < tc; ++i) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.maxPartitions(s) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends
