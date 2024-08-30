//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<vector<int>> ans;
    int row[10];
    int k = 0;
    
    bool place(int r, int c) {
        for(int i=0; i<c; i++) 
            if(row[i] == r || abs(row[i]-r) == abs(i-c))
                return false;
        
        return true;
    }
    
    void solve(int c, int n) {
        if(n == 2 || n == 3) return;
        
        if(c == n) {
            vector<int> v;
            for(int i=0; i<n; i++) 
                v.push_back(row[i]+1);
            ans.push_back(v);
            k++;
        }
        
        for(int i=0; i<n; i++) {
            if(place(i, c)) {
                row[c] = i;
                solve(c+1, n);
            }
        }
    }
    vector<vector<int>> nQueen(int n) {
        // code here
        ans.clear();
        solve(0, n);
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends
