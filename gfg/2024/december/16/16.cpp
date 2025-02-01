//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        // code here
        int i=0, j=0;
        int n = a.size(), m = b.size();
        
        while(i < n && j < m && i+j < k-1) {
            if(a[i] > b[j]) j++;
            else i++;
        }
        
        if(i+j == k-1) {
            if(i < n && j < m) return min(a[i], b[j]);
            if(i < n) return a[i];
            
            return b[j];
        }
        
        if(i < n) {
            while(i < n && i+j < k-1) i++;
            
            return a[i];
        }
        
        while(j < m && i+j < k-1) j++;
        return b[j];
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, m, k;
        cin >> k;
        cin.ignore();
        string input;
        int num;
        vector<int> a, b;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }

        getline(cin, input);
        stringstream s3(input);
        while (s3 >> num) {
            b.push_back(num);
        }

        Solution ob;
        cout << ob.kthElement(a, b, k) << endl << "~\n";
    }
    return 0;
}
// } Driver Code Ends
