//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int lis(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> ans(n, 1);
        
        for(int i=1; i<n; i++) 
            for(int j=0; j<i; j++) 
                if(arr[i] > arr[j] && ans[i] < ans[j] + 1)
                    ans[i] = ans[j] + 1;
            
        int maxVal = ans[0];
        for(int i=1; i<n; i++) maxVal = max(maxVal, ans[i]);
        
        return maxVal;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input

    while (t--) {
        int n;
        vector<int> arr;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            arr.push_back(num);

        Solution obj;
        cout << obj.lis(arr) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends
