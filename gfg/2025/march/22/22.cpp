//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
    int solve(int i, int j, vector<int> arr) {
        int n = arr.size();
        vector<int> ans(n);
        
        ans[i] = arr[i];
        ans[i+1] = max(arr[i], arr[i+1]);
        
        for(int k=i+2; k<=j; k++) 
            ans[k] = max(arr[k] + ans[k-2], ans[k-1]);
        
        return ans[j];
    }
  public:
    int maxValue(vector<int>& arr) {
        // your code here
        int n = arr.size();
        
        if(n == 0) return 0;
        if(n == 1) return arr[0];
        
        return max({ solve(0, n-2, arr), solve(1, n-1, arr), 0 });
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        int res;
        res = ob.maxValue(arr);
        cout << res << "\n"
             << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends
