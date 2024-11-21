//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int n = prices.size(), ans = 0;
        int buy = prices[0], sell = prices[0];
        
        for(int i=1; i<n; i++) {
            if(prices[i] > prices[i-1]) sell = prices[i];
            else {
                ans += sell - buy;
                buy = prices[i];
                sell = buy;
            }
        }
        
        ans += sell - buy;
        return ans;
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
        int n = arr.size();
        Solution ob;
        int res = ob.maximumProfit(arr);
        cout << res;

        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
