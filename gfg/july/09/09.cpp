//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

// arr : given vector of elements
// target : given sum value

class Solution {
  public:
    int threeSumClosest(vector<int> arr, int target) {
        // Your code goes here
        bool flag = false;
        int n = arr.size();
        int totalSum;
        
        sort(arr.begin(), arr.end());
        
        for(int i=0; i<n-2; i++) {
            int j = i+1;
            int k = n-1;
            
            while(j < k) {
                int sum = arr[i] + arr[j] + arr[k];
                
                if(!flag) {
                    totalSum = sum;
                    flag = true;
                }
                
                if(abs(sum - target) < abs(totalSum - target))
                    totalSum  = sum;
                else if(abs(sum - target) == abs(totalSum - target) 
                    && sum > totalSum) totalSum = sum;
                
                if(target > sum) j++;
                else k--;
            }
        }

        return totalSum;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int key;
        cin >> key;
        // cin.ignore();
        // if (f)
        //     return 0;
        Solution ob;
        cout << ob.threeSumClosest(arr, key) << endl;
    }
    return 0;
}
// } Driver Code Ends
