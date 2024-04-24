//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    int ways(int x, int y)
    {
        //code here.
        int mod = 1000000007;
        int dp[max(x, y)+1][max(x, y)+1];
        for(int i=0; i<=max(x, y); i++) {
            dp[0][i] = 1;
            dp[i][0] = 1;
        }
        
        for(long long i=1; i<=max(x, y); i++) {
            for(long long j=1; j<=max(x, y); j++) {
                dp[i][j] = (dp[i-1][j] + dp[i][j-1])%mod;
            }
        }
        
        return dp[x][y];
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        Solution ob;
        cout<<ob.ways(x,y)<<endl;
    }
	return 0;
}

// } Driver Code Ends
