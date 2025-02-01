//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
    void solve(string n, int temp, int remaining, vector<string> &ans) {
        if(remaining == 0) {
            ans.push_back(n);
            return;
        }
        
        solve(n + "1", temp + 1, remaining - 1, ans);
        
        if(0 < temp) solve(n + "0", temp - 1, remaining-1, ans);
    }

	vector<string> NBitBinary(int n)
	{
	    // Your code goes here
	    vector<string> ans;
	    
	    string s = "";
	    
	    solve(s, 0, n, ans);

		return ans;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends
