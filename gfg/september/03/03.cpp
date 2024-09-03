//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	    vector<vector<int>> dp;
	    int solve(int i, int j, string s1, string s2) {
	        if(i == s1.size()) return (s2.size()-j);
	        if(j == s2.size()) return (s1.size()-i);
	        if(dp[i][j] != -1) return dp[i][j];

	        int first = INT_MAX;
	        int second = INT_MAX;
	        
	        if(s1[i] == s2[j]) 
	            first = solve(i+1, j+1, s1, s2);
	        else 
	            second = min(1+solve(i, j+1, s1, s2), 
	                            1+solve(i+1, j, s1, s2));
	        
	        return dp[i][j] = min(first, second);
	    }
	int minOperations(string s1, string s2) 
	{ 
	    // Your code goes here
	    dp.resize(s1.size()+1, vector<int> (s2.size()+1, -1));
	    return solve(0, 0, s1, s2);
	} 
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends
