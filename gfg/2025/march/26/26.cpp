//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int wordBreak(string &s, vector<string> &dictionary) {
        // code here
        int n = s.size();
        vector<bool> ans(n+1, 0);
        ans[0] = 1;
        
        for(int i=1; i<=n; i++) {
            for(string &word: dictionary) {
                int j = i - word.size();
                
                if(j >= 0 && ans[j] && s.substr(j, word.size()) == word) {
                    ans[i] = 1;
                    break;
                }
            }
        }
        
        return ans[n];
    }
};


//{ Driver Code Starts.

vector<string> inputLine() {
    string str;
    getline(cin, str);
    stringstream ss(str);
    vector<string> res;
    while (ss >> str) {
        res.push_back(str);
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        cin >> s;
        cin.ignore();
        vector<string> dictionary = inputLine();

        Solution ob;
        if (ob.wordBreak(s, dictionary)) {
            cout << "true\n";
        } else
            cout << "false\n";
        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends
