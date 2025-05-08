//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int findMissing(vector<int> &arr) {
        // code here
        int n = arr.size();
        int ans = arr[n - 1] - arr[n - 2];
        
        if(arr[1] - arr[0] == arr[n - 1] - arr[n - 2]) 
            ans = arr[1] - arr[0];
        else if(arr[1] - arr[0] == (arr[n - 1] - arr[0]) / n) 
            ans = arr[1] - arr[0];
        
        if(ans == 0) return arr[0];
        
        int i = 0, j = n-1;
        
        while(i <= j) {
            int mid = (i + j) / 2;
            
            if((arr[mid] - arr[0]) / ans == mid) i = mid + 1;
            else j = mid - 1;
        }
        
        return arr[j] + ans;
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
        Solution ob;
        cout << ob.findMissing(arr) << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
