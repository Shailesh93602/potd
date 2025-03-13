//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to return max value that can be put in knapsack of capacity.
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        // code here
        vector<int> ans(W + 1, 0);
        
        for(int i=1; i<=wt.size(); i++) 
            for(int j=W; j>=wt[i-1]; j--) 
                ans[j] = max(ans[j], ans[j - wt[i-1]] + val[i-1]);
        
        return ans[W];
    }
};


//{ Driver Code Starts.

int main() {
    // Taking total test cases
    int testCases;
    cin >> testCases;
    cin.ignore();
    while (testCases--) {
        // Reading number of items and capacity
        int numberOfItems, capacity;
        vector<int> weights, values;
        string input;
        int number;

        // Read capacity and number of items
        getline(cin, input);
        stringstream ss(input);
        ss >> capacity;      // The first number is the capacity
        ss >> numberOfItems; // The second number is the number of items

        // Read values
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            values.push_back(number);
        }

        // Read weights
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            weights.push_back(number);
        }

        Solution solution;
        cout << solution.knapsack(capacity, values, weights) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
