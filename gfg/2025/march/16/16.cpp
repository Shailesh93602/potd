//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int minJumps(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> ans(n, INT_MAX);
        ans[n-1] = 0;
        
        for(int i=n-2; i>=0; i--) 
            for(int j=i+1; j<=i + arr[i] && j < n; j++) 
                if(ans[j] != INT_MAX) 
                    ans[i] = min(ans[i], 1 + ans[j]);
          
        if(ans[0] == INT_MAX) return -1;
        
        return ans[0];
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, i, j;
        vector<int> arr;
        string ip;
        int number;
        getline(cin, ip);
        stringstream ss(ip);

        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.minJumps(arr) << endl << "~\n";
    }
    return 0;
}

// } Driver Code Ends
