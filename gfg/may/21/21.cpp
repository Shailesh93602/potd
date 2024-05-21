//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
     int solve(vector<int>& arr, int i, int j, int x) {
        if (arr[j] <= x) return j;
        if (arr[i] > x) return i;
        
        int mid = (i + j) / 2;
        if (arr[mid] <= x && arr[mid + 1] > x) return mid;
        else if (arr[mid] < x) return solve(arr, mid + 1, j, x);
        return solve(arr, i, mid - 1, x);
    }
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        // code here
        vector<int> ans;
        vector<int> temp;
        
        int i = solve(arr, 0, n - 1, x);

        int j = i + 1; 
        int count = 0; 

        if (arr[i] == x) i--;
        
        while (i >= 0 && j < n && count < k) {
            if (x - arr[i] < arr[j] - x) {
                temp.push_back(arr[i]);
                i--;
            }
            else {
                temp.push_back(arr[j]);
                j++;
            }
            count++;
        }
        
        while (count < k && i >= 0) {
            temp.push_back(arr[i]);
            i--;
            count++;
        }

        while (count < k && j < n) {
            temp.push_back(arr[j]);
            j++;
            count++;
        }

        for (i = 0; i < k; i++) ans.push_back(temp[i]);

        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> k >> x;
        Solution ob;
        auto ans = ob.printKClosest(arr, n, k, x);
        for (auto e : ans) {
            cout << e << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
