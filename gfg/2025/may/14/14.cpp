//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string countAndSay(int n) {
        // code here
        string ans = "1";
        if(n == 1) return ans;
        
        for(int i=2; i<=n; i++) {
            string temp = "";
            int count = 1;
            
            for(int j=1; j<ans.length(); j++) {
                if(ans[j] == ans[j - 1]) count++;
                else {
                    temp += to_string(count) + ans[j - 1];
                    count = 1;
                }
            }
            
            temp += to_string(count) + ans.back();
            ans = temp;
        }

        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;
        cout << obj.countAndSay(n) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends
