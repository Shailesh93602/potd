//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
//  Class Solution to contain the method for solving the problem.
class Solution {
  public:
    // Function to determine if array arr can be split into three equal sum sets.
    vector<int> findSplit(vector<int>& arr) {
        // code here
        int n = arr.size();
        int sum = 0;
        for(int i: arr) sum += i;
        
        int i=0, j=n-1;
        int sum1=0, sum2=0;
        while(i < j) {
            if(sum1 < sum2) {
                sum1 += arr[i];
                sum -= arr[i++];
            }
            else {
                sum2 += arr[j];
                sum -= arr[j--];
            }
            
            if(sum1 == sum2 && sum2 == sum) return { i, j };
        }
        
        return { -1, -1 };
    }
};

//{ Driver Code Starts.

int main() {
    int test_cases;
    cin >> test_cases;
    cin.ignore();
    while (test_cases--) {
        string input;
        vector<int> arr;

        // Read the array from input line
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        // Solution instance to invoke the function
        Solution ob;
        vector<int> result = ob.findSplit(arr);

        // Output result
        if (result[0] == -1 && result[1] == -1) {
            cout << "false" << endl;
        } else {
            cout << "true" << endl;
        }
    }
    return 0;
}

// } Driver Code Ends
