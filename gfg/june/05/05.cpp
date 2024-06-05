//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {

  public:
    int getTarget(int a[], int n, int b[], int m) {
        int sumA = 0;
        int sumB = 0;
        
        for(int i=0; i<n; i++) sumA += a[i];
        for(int i=0; i<m; i++) sumB += b[i];

        if ((sumA - sumB) % 2 != 0) return INT_MIN;
        return ((sumA - sumB) / 2);
    }
    
    int findSwapValues(int a[], int n, int b[], int m) {
        // Your code goes here
        sort(a, a + n);
        sort(b, b + m);

        int target = getTarget(a, n, b, m);

        if (target == INT_MIN) return -1;

        int i = 0, j = 0;

        while (i < n && j < m) {
            int diff = a[i] - b[j];

            if (diff == target) return 1;
            else if (diff < target) i++;
            else j++;
        }

        return -1;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n];
        int b[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        Solution ob;
        cout << ob.findSwapValues(a, n, b, m);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
