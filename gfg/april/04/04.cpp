//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    int mod = 1000000007;
    //Function to find sum of all possible substrings of the given string.
    long long sumSubstrings(string s){
        // your code here
        long long dp[s.size()];
        dp[0] = int(s[0]-'0');
        
        long long ans = 0;
        long long mod = 1000000007;
        ans = dp[0];
        
        for(int i=1; i<s.length(); i++) {
            int curr = (int)(s[i] - '0');
            
            dp[i] = (((i+1) * (curr))%mod + (dp[i-1]*10)%mod)%mod;
            
            ans = (ans+dp[i])%mod;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking string
        string s;
        cin>>s;
        Solution ob;
        //calling sumSubstrings() function
        cout << ob.sumSubstrings(s) << endl;
        
    }
    return 0;
}

// } Driver Code Ends