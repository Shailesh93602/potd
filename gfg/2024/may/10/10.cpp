//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void solve(int index, vector<int> &a, int k, int n, vector<int> v, vector<vector<int>> &ans) {
        if(k == 0) {
            ans.push_back(v);
            return;
        }
        if(index == n || k < 0) return;

        for(int i=index; i<n; i++) {
            if(i != index && a[i] == a[i-1]) continue;
            v.push_back(a[i]);
            solve(i+1, a, k-a[i], n, v, ans);
            v.pop_back();
        }
    }
    vector<vector<int>> CombinationSum2(vector<int> arr,int n,int k)
    {
        //code here
        sort(arr.begin(), arr.end());
        vector<int> v;
        vector<vector<int>>ans;
        
        solve(0, arr, k, n, v, ans);

        return ans;
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        auto obj=ob.CombinationSum2(arr,n,k);
        for(int i=0;i<obj.size();i++)
        {
            for(int j=0;j<obj[i].size();j++)
            {
                cout<<obj[i][j]<<" ";
            }
            cout<<"\n";
        }
        if(obj.size()==0) cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends
