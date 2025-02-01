//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int solve(vector<int> arr1, vector<int> arr2, int n, int m, int k, int i, int j) {
        if(i == n) return arr2[j+k-1];
        if(j == m) return arr1[i+k-1];
        
        if(k == 1) {
            if(arr1[i] < arr2[j]) return arr1[i];
            return arr2[j];
        }
        
        int curr = k/2;
        if(curr-1 >= n-i) {
            if(arr1[n-1] < arr2[j+curr-1]) return arr2[j+k-(n-i)-1];
            return solve(arr1, arr2, n, m, k-curr, i, j+curr);
        }
        
        if(curr-1 >= m-j) {
            if(arr2[m-1] < arr1[i+curr-1]) return arr1[i+k-(m-j)-1];
            return solve(arr1, arr2, n, m, k-curr, i+curr, j);
        }
        
        if(arr1[curr+i-1] < arr2[curr+j-1]) 
            return solve(arr1, arr2, n, m, k-curr, i+curr, j);
        
        return solve(arr1, arr2, n, m, k-curr, i, j+curr);
    }   
    
    int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        // code here
         return solve(arr1, arr2, arr1.size(), arr2.size(), k, 0, 0);
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
        vector<int> arr1, arr2;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr1.push_back(num);
        }

        getline(cin, input);
        stringstream s3(input);
        while (s3 >> num) {
            arr2.push_back(num);
        }

        Solution ob;
        cout << ob.kthElement(k, arr1, arr2) << endl;
    }
    return 0;
}
// } Driver Code Ends
