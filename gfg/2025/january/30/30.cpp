//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    void solve(int j, int n, vector<int> board, vector<bool> temp, 
                vector<bool> ans1, vector<bool> ans2, vector<vector<int>> &ans) {
        if(j > n) {
            ans.push_back(board);
            return;
        }
        
        for(int i=1; i<=n; i++) {
            if(!temp[i] && !ans1[i + j] && !ans2[i - j + n]) {
                temp[i] = ans1[i + j] = ans2[i - j + n] = true;
                board.push_back(i);
                
                solve(j + 1, n, board, temp, ans1, ans2, ans);
                
                board.pop_back();
                temp[i] = ans1[i + j] = ans2[i - j + n] = false;
            }
        }
    }
  public:
    vector<vector<int>> nQueen(int n) {
        // code here
        vector<vector<int>> ans;
        vector<int> board;
        vector<bool> temp(n+1, false), ans1(2 * n + 1, false), ans2(2 * n + 1, false);
        
        solve(1, n, board, temp, ans1, ans2, ans);
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

        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if (ans.size() == 0)
            cout << -1 << "\n";
        else {
            sort(ans.begin(), ans.end());
            for (int i = 0; i < ans.size(); i++) {
                cout << "[";
                for (int u : ans[i])
                    cout << u << " ";
                cout << "] ";
            }
            cout << endl;
        }

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends
