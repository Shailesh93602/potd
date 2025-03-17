//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        int n = arr.size();
        vector<bool> ans(sum + 1, false), temp(sum + 1);
        ans[0] = true;
        
        for(int i=1; i<=n; i++) {
            for(int j=0; j<=sum; j++) {
                if(j < arr[i - 1]) temp[j] = ans[j];
                else temp[j] = (ans[j] || ans[j - arr[i - 1]]);
            }
            
            ans = temp;
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
        int sum;
        cin >> sum;
        cin.ignore();

        Solution ob;
        if (ob.isSubsetSum(arr, sum))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
