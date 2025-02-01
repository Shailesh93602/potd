//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int minPoints(int m, int n, vector<vector<int>> points) 
	{ 
	    // Your code goes here
	    int dp[m][n];
	    
	    if(points[m-1][n-1] > 0) {
	        dp[m-1][n-1] = 1;
	    }
	    else {
	        dp[m-1][n-1] = abs(points[m-1][n-1]) + 1;
	    }
	    
	    for(int i=m-2; i>=0; i--) dp[i][n-1] = max(dp[i+1][n-1] - points[i][n-1], 1);
	    for(int j=n-2; j>=0; j--) dp[m-1][j] = max(dp[m-1][j+1] - points[m-1][j], 1);
	    
	    for(int i=m-2; i>=0; i--) {
	        for(int j=n-2; j>=0; j--) {
	            int minPoints = min(dp[i+1][j], dp[i][j+1]);
	            dp[i][j] = max(minPoints - points[i][j], 1);
	        }
	    }
	    return dp[0][0]; 
	} 
};


//{ Driver Code Starts.
int main() 
{
   
   	int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;

        vector<vector<int>> a(m, vector<int>(n));

        for(int i = 0; i < m; i++)
        	for(int j = 0; j < n; j++)
        		cin >> a[i][j];

        

	    Solution ob;
	    cout << ob.minPoints(m,n,a) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends
