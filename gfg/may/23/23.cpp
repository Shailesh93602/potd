//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int dp[1001][1001];
     int isKPalRec(string& str1, string& str2, int m, int n) {
        if (m == 0) return n; 

        if (n == 0) return m;

        if (dp[m][n] != -1) return dp[m][n];
        
        if (str1[m - 1] == str2[n - 1]) {
            dp[m][n] = isKPalRec(str1, str2, m - 1, n - 1);
            return dp[m][n];
        }
        
        dp[m][n] = 1 + min(isKPalRec(str1, str2, m-1, n), isKPalRec(str1, str2, m, n-1));
        return dp[m][n];
    }
    bool isPalindrome(string s, int i, int j) {
        while(i < j) if(s[i++] != s[j--]) return false;
        
        return true;
    }
    int kPalindrome(string str, int n, int k)
    {
        // code here
        string revStr = str;
        reverse(revStr.begin(), revStr.end());
        int len = str.length();
        memset(dp, -1, sizeof(dp));

        return (isKPalRec(str, revStr, len, len) <= k * 2);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.kPalindrome(str, n, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends
