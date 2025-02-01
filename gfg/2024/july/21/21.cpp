//{ Driver Code Starts
/* Driver program to test above function */

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int findMaxProduct(vector<int>& arr) {
        // Write your code here
        int n = arr.size();
        if(n == 1) return arr[0];
        
        long long int ans = 1;
        int mod = 1e9 + 7;
        int id = -1;
        int minEle = 0;
        int counta = 0;
        int countb = 0;
        
        for(int i=0; i<n; i++)  {
            if(!arr[i]) counta++;
            else if(arr[i] < 0) {
                countb++;
                if(id == -1 || arr[i] > minEle) {
                    id = i;
                    minEle = arr[i];
                }
            }
        }

        if(counta == n) return 0;
        if(countb == 1 && counta == n-1) return 0;
        
        for(int i=0; i<n; i++) {
            if(arr[i] == 0) continue;
            if(countb%2 == 1 && i == id) continue;
            ans = ((ans * arr[i]) % mod) % mod;
        }
        
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        long long int ans = ob.findMaxProduct(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends
