//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
        int n = arr.size();
        int idx = -1;
        
        for(int i=n-2; i>=0; i--) {
            if(arr[i] < arr[i+1]) {
                idx = i;
                break;
            }
        }
        
        if(idx != -1) {
            for(int i=n-1; i>idx; i--) {
                if(arr[i] > arr[idx]) {
                    swap(arr[i], arr[idx]);
                    break;
                }
            }
        }
        
        int i = idx + 1, j = n-1;
        while(i < j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
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
        int n = arr.size();
        ob.nextPermutation(arr);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
