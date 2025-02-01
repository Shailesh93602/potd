//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int findPages(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        
        if(k > n) return -1;
        int start = arr[0], end = arr[0], ans = INT_MAX;
        for(int i=1; i<n; i++) {
            start = max(start, arr[i]);
            end += arr[i];
        }
        
        while(start <= end) {
            int mid = start + (end - start) / 2;
            
            int sum = 0, count = 1;
            
            for(int i: arr) {
                if(sum + i > mid) {
                    count++;
                    sum = i;
                } else sum += i;
            }
            
            if(count <= k) {
                end = mid - 1;
                ans = min(ans, mid);
            }
            else start = mid + 1;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.findPages(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends
