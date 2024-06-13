//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    int mod = 1000000007;
    int padovanSequence(int n)
    {
       //code here
       if(n <= 2) return 1;
       long long first = 1, second = 1, third = 1;
       for(int i=3; i<=n; i++) {
           long long temp = (first%mod + second%mod)%mod;
           first = second;
           second = third;
           third = temp;
       }
       return third%mod;
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
    	Solution ob;
    	cout<<ob.padovanSequence(n)<<endl;
    }
    return 0;
}
// } Driver Code Ends
