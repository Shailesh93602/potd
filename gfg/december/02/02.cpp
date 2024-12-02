//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> solve(string &pat) {
        int i=0, n=pat.length();
        vector<int> ans(n+1, 0);
        
        for(int i=1; i<n; i++) {
            int j = ans[i-1];
            while(j >0 && pat[i] != pat[j]) j = ans[j-1];
            if(pat[i] == pat[j]) j++;
            ans[i] = j;
        }
        
        return ans;
    }
    vector<int> search(string& pat, string& txt) {
        // code here
        vector<int> res;
        int n = txt.size(), m = pat.size();
        
        vector<int> ans = solve(pat);
        int f=0, j=0, i=0;
        
        while(i < n) {
            if(txt[i] == pat[j]) {
                i++;
                j++;
            } 
            
            if(j == m) {
                f++;
                res.push_back(i - j);
                j = ans[j - 1];
            }
            else if(i < n && txt[i] != pat[j]) {
                if(j != 0) j = ans[j - 1];
                else i++;
            }
        }
        
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector<int> res = ob.search(pat, S);
        if (res.size() == 0)
            cout << "[]" << endl;
        else {
            for (int i : res)
                cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// } Driver Code Ends
