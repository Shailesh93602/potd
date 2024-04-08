//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//Function to find the maximum possible amount of money we can win.
class Solution{
    public:
    long long maximumAmount(int n, int arr[]){
        // Your code here
        int dp[n][n];
        
        for(int k = 0; k<n; k++) {
            for(int i=0, j = k; j < n; i++, j++) {
                int x = 0, y = 0, z = 0;
                if(i+2 <= j) x = dp[i+2][j];
                if(i+1 <= j-1) y = dp[i+1][j-1];
                if(i <= j-2) z = dp[i][j-2];
                
                dp[i][j] = max(arr[i] + min(x, y), arr[j] + min(y, z));
            }
        }
        
        return dp[0][n-1]; 
    }
};

//{ Driver Code Starts.
int main() 
{
   
   	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		cout<< ob.maximumAmount(n,a)<<endl;
	}
	return 0;
}
// } Driver Code Ends
