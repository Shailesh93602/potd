//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of cuts.
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        //Your code here
        vector<int> dp(n+1, 0);
        
        for(int i=1; i<=n; i++) {
            if(i == x || (i > x && dp[i-x] > 0)) 
                dp[i] = max(dp[i-x]+1, dp[i]);
            if(i == y || (i > y && dp[i-y] > 0)) 
                dp[i] = max(dp[i-y]+1, dp[i]);
            if(i == z || (i > z && dp[i-z] > 0)) 
                dp[i] = max(dp[i-z]+1, dp[i]);
        }
        
        return dp[n];
    }
};

//{ Driver Code Starts.
int main() {
    
    //taking testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking length of line segment
        int n;
        cin >> n;
        
        //taking types of segments
        int x,y,z;
        cin>>x>>y>>z;
        Solution obj;
        //calling function maximizeTheCuts()
        cout<<obj.maximizeTheCuts(n,x,y,z)<<endl;

    }

	return 0;
}
// } Driver Code Ends
