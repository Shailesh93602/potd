//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
    int solve(string s, int i, int j, bool isTrue, vector<vector<vector<int>>> &ans) {
        if(ans[i][j][isTrue] != -1) return ans[i][j][isTrue];
        
        if(i > j) return 0;
        
        if(i == j) return ans[i][j][isTrue] = (isTrue == (s[i] == 'T'));

        int count = 0;
        for(int k=i+1; k<j; k+=2) {
            int lt = solve(s, i, k-1, true, ans);
            int lf = solve(s, i, k-1, false, ans);
            int rt = solve(s, k+1, j, true, ans);
            int rf = solve(s, k+1, j, false, ans);
            
            switch(s[k]) {
                case '&':
                    if(isTrue) count += lt * rt;
                    else count += lf * rf + lf * rt + lt * rf;
                    break;
                case '|':
                    if(isTrue) count += lt * rt + lt * rf + lf * rt;
                    else count += lf * rf;
                    break;
                case '^':
                    if(isTrue) count += lt * rf + lf * rt;
                    else count += lt * rt + lf * rf;
                    break;
                default: 
                    break;
            }
        }
        
        return ans[i][j][isTrue] = count;
    }
  public:
    int countWays(string &s) {
        // code here
        int n = s.length();
        vector<vector<vector<int>>> ans(n, vector<vector<int>>(n, vector<int>(2, -1)));

        return solve(s, 0, n-1, true, ans);
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        int ans = ob.countWays(s);
        cout << ans << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends
