//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    int findMaximum(vector<int> &arr) {
        // code here
        int n = arr.size();
        
        if(n == 1 || arr[0] > arr[1]) return arr[0];
        
        if(arr[n-1] > arr[n-2]) return arr[n-1];
        
        int i = 1, j = n - 2;
        
        while(i <= j) {
            int k = i + (j - i) / 2;
            
            if(arr[k] > arr[k - 1] && arr[k] > arr[k + 1]) return arr[k];
            
            if(arr[k] < arr[k + 1]) i = k + 1;
            else j = k - 1;
        }
        
        return arr[j];
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        vector<int> arr;
        int value;

        // Read the entire line of integers
        string line;
        // cin.ignore(); // Ignore the newline after the test case input
        getline(cin, line);
        stringstream ss(line);

        // Parse integers and add them to the vector
        while (ss >> value) {
            arr.push_back(value);
        }

        Solution ob;
        auto ans = ob.findMaximum(arr);
        cout << ans << "\n";
        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends
