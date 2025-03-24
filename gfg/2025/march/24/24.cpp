//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int matrixMultiplication(vector<int> &arr) {
        // code here
        int n = arr.size();
        vector<vector<int>> ans(n, vector<int>(n, 0));
        
        for(int i=2; i<n; i++) {
            for(int j=0; j<n-i; j++) {
                int k = i + j;
                ans[j][k] = INT_MAX;
                
                for(int l=j+1; l<k; l++) 
                    ans[j][k] = min(ans[j][k], ans[j][l] + ans[l][k]
                                + arr[j] * arr[k] * arr[l]);
            }
        }
        
        return ans[0][n-1];
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input
    while (t--) {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.matrixMultiplication(a) << endl << "~\n";
    }

    return 0;
}

// } Driver Code Ends
