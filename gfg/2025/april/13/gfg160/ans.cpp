//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
    void solve(vector<vector<string>> &accounts, 
                unordered_map<string, vector<int>> &map, 
                vector<bool> &visited, set<string>  &s, int i) {
        if(visited[i]) return;
        visited[i] = true;
        
        for(int j=0; j<accounts[i].size(); j++) s.insert(accounts[i][j]);
        
        for(int j=1; j<accounts[i].size(); j++) 
            for(int k=0; k<map[accounts[i][j]].size(); k++)  
                solve(accounts, map, visited, s, map[accounts[i][j]][k]);
            
    }
  public:
    vector<vector<string>> accountsMerge(vector<vector<string>> &accounts) {
        // code here
        int n = accounts.size(), m = accounts[0].size();
        unordered_map<string, vector<int>> map;
        vector<bool> visited(n, false);
        
        for(int i=0; i<n; i++) 
           for(int j=1; j<accounts[i].size(); j++)
               map[accounts[i][j]].push_back(i);
           
        vector<set<string>> res;
        
        for(int i=0; i<n; i++) {
            if(!visited[i]) {
                set<string> temp;
                solve(accounts, map, visited, temp, i);
                res.push_back(temp);
            }
        }
        
        vector<vector<string>> ans;
        for(auto x: res) {
            vector<string> temp;
            for(auto i: x) temp.push_back(i);
            ans.push_back(temp);
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
        vector<vector<string>> accounts;

        for (int i = 0; i < n; i++) {
            vector<string> temp;
            int x;
            cin >> x;

            for (int j = 0; j < x; j++) {
                string s1;
                cin >> s1;
                temp.push_back(s1);
            }
            accounts.push_back(temp);
        }

        ///
        Solution obj;
        vector<vector<string>> res = obj.accountsMerge(accounts);

        for (int i = 0; i < res.size(); i++) {
            sort(res[i].begin(), res[i].end());
        }
        sort(res.begin(), res.end());
        cout << "[";
        for (int i = 0; i < res.size(); ++i) {
            cout << "[";
            for (int j = 0; j < res[i].size(); j++) {
                if (j != res[i].size() - 1)
                    cout << res[i][j] << ","
                         << " ";
                else
                    cout << res[i][j];
            }
            if (i != res.size() - 1)
                cout << "], " << endl;
            else
                cout << "]";
        }
        cout << "]" << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends
