//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int minCoins(vector<int> &coins, int sum) {
        // code here
        int n = coins.size();
        vector<int> ans(sum+1, INT_MAX);
        ans[0] = 0;
        
        for(int i=n-1; i>=0; i--) {
            for(int j=1; j<=sum; j++) {
                int take = INT_MAX, noTake = INT_MAX;
                
                if(j - coins[i] >= 0 && coins[i] > 0) {
                    take = ans[j - coins[i]];
                    
                    if(take != INT_MAX) take++;
                }
                
                if(i + 1 < n) noTake = ans[j];
                
                ans[j] = min(take, noTake);
            }
        }
        
        if(ans[sum] != INT_MAX) return ans[sum];
        
        return -1;
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.minCoins(arr, k);
        cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
