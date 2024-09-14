//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    void rearrange(vector<int> &arr) {
        // code here
        vector<int> arr1, arr2;
        int n = arr.size();
        
        for(int i: arr) {
            if(i < 0) arr1.push_back(i);
            else arr2.push_back(i);
        }
        
        int i=0, j=0, k=0;
        
        while(i < arr1.size() && j < arr2.size()) {
            arr[k++] = arr2[j++];
            arr[k++] = arr1[i++];
        }
        
        while(j < arr2.size()) arr[k++] = arr2[j++];
        while(i < arr1.size()) arr[k++] = arr1[i++];
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
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
