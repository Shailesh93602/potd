//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void solve(string &str, vector<int> &ans) {
        int n = 0, i = 1;
        ans[0] = 0;
        
        while(i < str.length()) {
            if(str[i] == str[n]) ans[i++] = ++n;
            else {
                if(n == 0) {
                    ans[i] = 0;
                    i++;
                }
                else n = ans[n-1];
            }
        }
    }
    bool KMPSearch(string &text, string &pat, vector<int> &ans) {
        int n = text.length(), m = pat.length();
        int i=0, j=0;
        
        while((n-i) >= (m-j)) {
            if(pat[j] == text[i]) {
                j++;
                i++;
            }
            
            if(j == m) return true;
            else if(i < n && pat[j] != text[i]) {
                if(j != 0) j = ans[j-1];
                else i++;
            }
        }
        
        return false;
    }
    int minRepeats(string& s1, string& s2) {
        // code here
        int n = s1.length(), m = s2.length();
        vector<int> ans(m);
        solve(s2, ans);
        
        int x = (m + n - 1) / n;
        string temp1;
        for(int i=0; i<x; i++) temp1.append(s1);
        
        if(KMPSearch(temp1, s2, ans)) return x;
        
        temp1.append(s1);
        if(KMPSearch(temp1, s2, ans)) return x+1;
        
        return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {
        string A, B;
        getline(cin, A);
        getline(cin, B);

        Solution ob;
        cout << ob.minRepeats(A, B) << endl;
    }
    return 0;
}
// } Driver Code Ends
