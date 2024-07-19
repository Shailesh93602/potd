//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
//  User function template for C++

class Solution {
  public:
    int solve(vector<int> ret, int val) {
        int low = 0;
        int high = ret.size()-1;
        while(low <= high) {
            int mid = (low+high)/2;
            if(ret[mid] == val) high = mid-1;
            else if(ret[mid] > val) high = mid-1;
            else low = mid+1;
        }
        return low;
    }
    vector<int> constructLowerArray(vector<int> &arr) {
        // code here
        vector<int> ret(arr.begin(), arr.end());
        sort(ret.begin(), ret.end());
        
        vector<int> ans(arr.size());
        for(int i=0; i<arr.size(); i++) {
            int m = solve(ret, arr[i]);
            ans[i] = m;
            ret.erase(ret.begin()+m);
        }
        return ans;
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
        int n = arr.size();
        Solution ob;
        vector<int> a = ob.constructLowerArray(arr);
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
