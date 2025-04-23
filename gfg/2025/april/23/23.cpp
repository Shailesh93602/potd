//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> singleNum(vector<int>& arr) {
        // Code here.
        int xorVal = 0;
        
        for(int i: arr) xorVal ^= i;
        
        xorVal &= -xorVal;
        int x = 0, y = 0;
    
        for(int i: arr) {
            if((i & xorVal) == 0) x ^= i;
            else y ^= i;
        }
        
        if(x > y) return { y, x };
        
        return { x, y };
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

        Solution ob;
        vector<int> ans = ob.singleNum(arr);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends
