//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int solve(vector<int> &arr, int i) {
        if(arr.empty()) {
            arr.push_back(i);
            return 0;
        }
        
        int l = 0, r = arr.size()-1;
        
        while(l <= r) {
            int mid = l + (r - l)/2;
            
            if(arr[mid] < i) l = mid+1;
            else r = mid-1;
        }
        
        arr.insert(arr.begin()+l, i);
        return l;
    }
    // Function to count inversions in the array.
    int inversionCount(vector<int> &arr) {
        // Your Code Here
        int count = 0;
        vector<int> ans;
        int j;
        
        for(int i=0; i<arr.size(); i++) {
            j = solve(ans, arr[i]);
            int n = ans.size();
        
            while(j < n-1 && ans[j] == ans[j+1]) j++;
            
            count += n-j-1;
        }
        
        return count;
    }
};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        int n;
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);
        Solution obj;
        cout << obj.inversionCount(a) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends
