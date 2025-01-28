//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void solve(int n, string &curr, unordered_map<char, int> &map, vector<string> &ans) {
        if(curr.length() == n) {
            ans.push_back(curr);
            return;
        }
        
        for(auto it: map) {
            char ch = it.first;
            int count = it.second;
            
            if(count == 0) continue;
           
            curr.push_back(ch);
            map[ch]--;
            
            solve(n, curr, map, ans);
            
            curr.pop_back();
            map[ch]++;
        }
    }
    vector<string> findPermutation(string &s) {
        // Code here there
        vector<string> ans;
        unordered_map<char, int> map;
        
        for(char ch: s) map[ch]++;
        
        string curr = "";
        solve(s.length(), curr, map, ans);
        
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        vector<string> ans = ob.findPermutation(S);
        sort(ans.begin(), ans.end());
        for (auto i : ans) {
            cout << i << " ";
        }
        cout << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends
