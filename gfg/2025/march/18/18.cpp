//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool equalPartition(vector<int>& arr) {
        // code here
        int sum = 0, n = arr.size();
        
        for(int i: arr) sum += i;
        
        if(sum%2 != 0) return false;
        
        sum /= 2;
        
        vector<bool> ans(sum + 1, false), curr(sum + 1);
        ans[0] = true;
        
        for(int i=1; i<=n; i++) {
            for(int j=0; j<=sum; j++) {
                if(j < arr[i-1]) curr[j] = ans[j];
                else curr[j] = (ans[j] || ans[j - arr[i-1]]);
            }
            
            ans = curr;
        }
        
        return ans[sum];
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        if (ob.equalPartition(arr))
            cout << "true\n";
        else
            cout << "false\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends
