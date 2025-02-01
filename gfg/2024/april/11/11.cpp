//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // function to convert a given Gray equivalent n to Binary equivalent.
    int grayToBinary(int n)
    {
        
        // Your code here
        if(n == 0 || n == 1) return n;
        int ans = 0;
        for(int i=30;i>=0; i--) {
            if((n & (1 << i)) == 0) {
                if((ans & (1 << (i+1))) != 0) {
                    ans += 1 << i;
                }
            }
            else {
                if((ans & (1 << (i+1))) == 0) {
                    ans += 1<<i;
                }
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
    int t,n;
    cin>>t;//testcases
    while(t--)
    {
        cin>>n;//initializing n
        
        Solution ob;
        //calling function grayToBinary()
       cout<< ob.grayToBinary(n)<<endl;
    }
}

// } Driver Code Ends
