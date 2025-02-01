//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<vector<string>> anagrams(vector<string>& arr) {
        // code here
        int n = arr.size();
        vector<vector<string>> ans;
        vector<bool> visited(n + 1, false);
        
        for(int i=0; i<n; i++) {
            vector<string> res;
            
            if(visited[i]) continue;
            res.push_back(arr[i]);
            string first = arr[i];
            sort(first.begin(), first.end());
            
            for(int j=i+1; j<n; j++) {
                string second = arr[j];
                sort(second.begin(), second.end());
                
                if(!visited[j] && first == second) {
                    visited[j] = true;
                    res.push_back(arr[j]);
                }
            }
            
            if(res.size() > 0) ans.push_back(res);
        }
        
        sort(ans.begin(), ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<string> arr;
        string input_line;
        getline(cin, input_line);
        stringstream ss(input_line);
        string word;
        while (ss >> word) {
            arr.push_back(word);
        }

        Solution ob;
        vector<vector<string> > result = ob.anagrams(arr);
        sort(result.begin(), result.end());
        for (int i = 0; i < result.size(); i++) {
            for (int j = 0; j < result[i].size(); j++) {
                cout << result[i][j] << " ";
            }
            cout << "\n";
        }

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends
