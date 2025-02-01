//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // arr: input array
    // Function to find maximum circular subarray sum.
    int circularSubarraySum(vector<int> &arr) {
        // your code here
       int n = arr.size();
        int rightSum = arr[n-1];
        vector<int> maxRight(n+1, 0);
        maxRight[n-1] = rightSum;
        
        for(int i=n-2; i>=0; i--) {
            rightSum += arr[i];
            maxRight[i] = max(maxRight[i+1], rightSum);
        }
        
        int cirSum = arr[0], sum = 0, currSum = 0, left = 0;
        
        for(int i=0; i<n; i++) {
            currSum = max(currSum + arr[i], arr[i]);
            sum = max(sum, currSum);
            
            left += arr[i];
            cirSum = max(cirSum, left + maxRight[i+1]);
        }
        
        return max(cirSum, sum);
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

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.circularSubarraySum(arr);

        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends
