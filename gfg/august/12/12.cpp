//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

//Position this line where user code will be pasted.
class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        // code here
        int n = arr1.size();
        int i=0, j=n;
        
        while(i <= j) {
            int mid1 = (i + j)/2;
            int mid2 = n - mid1;
            
            int l1 = (mid1 == 0) ? INT_MIN : arr1[mid1 - 1];
            int l2 = (mid2 == 0) ? INT_MIN : arr2[mid2 - 1];
            int r1 = (mid1 == n) ? INT_MAX : arr1[mid1];
            int r2 = (mid2 == n) ? INT_MAX : arr2[mid2];
            
            if(l1 <= r2 && l2 <= r1) return max(l1, l2) + min(r1, r2);
            else if(l1 > r2) j = mid1 - 1;
            else i = mid1 + 1;
        }

        return 0;
    }
};

//{ Driver Code Starts.
//Back-end complete function template in C++

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr, brr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            brr.push_back(number2);
        }
        Solution ob;
        int res = ob.SumofMiddleElements(arr, brr);
        cout << res << endl;
    }
}
// } Driver Code Ends
