//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int findSubString(string& str) {
        // code here
        int n = str.length(), dis = 0;
        vector<bool> visited(26, false);
        
        for(int i=0; i<n; i++) {
            if(!visited[str[i] - 'a']) {
                visited[str[i] - 'a'] = true;
                dis++;
            }
        }

        vector<int> curr(26, 0);
        int count = 0, ans = n, start = 0;
        
        for(int i=0; i<n; i++) {
            curr[str[i] - 'a']++;
            
            if(curr[str[i] - 'a'] == 1) count++;
            
            while(count == dis) {
                ans = min(ans, i - start + 1);
                curr[str[start] - 'a']--;
                
                if(curr[str[start++] - 'a'] == 0) count--;
            }
        }
        
        return ans;
    }
};


//{ Driver Code Starts.
//      Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends
