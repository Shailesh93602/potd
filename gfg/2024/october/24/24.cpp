//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> modifyAndRearrangeArray(vector<int> &arr) {
        // Complete the function
        int n = arr.size();
        for(int i=0; i<n-1; i++) {
            if(arr[i] == arr[i+1]) {
                arr[i] *= 2;
                arr[i+1] = 0;
                i++;
            }
        }
        
        int count = 0;
        for(int i: arr) if(i == 0) count++;
        
        int i = 0;
        for(int j: arr) if(j != 0) arr[i++] = j;
        while(i < n) arr[i++] = 0;
        
        return arr;
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        vector<int> ans = obj.modifyAndRearrangeArray(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends
