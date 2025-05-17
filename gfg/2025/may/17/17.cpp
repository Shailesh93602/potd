//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
    int solve(int x, int a, int b, int c) {
        return a * x * x + b * x + c;
    }
  public:
    vector<int> sortArray(vector<int> &arr, int A, int B, int C) {
        // code here
        int n = arr.size(), idx = 0;
        vector<int> ans(n);
        int i = 0, j = n-1;
        
        if(A >= 0) idx = n-1;
        
        while(i <= j) {
            int val1 = solve(arr[i], A, B, C), val2 = solve(arr[j], A, B, C);
            
            if(A >= 0) {
                if(val1 > val2) {
                    ans[idx--] = val1;
                    i++;
                } else {
                    ans[idx--] = val2;
                    j--;
                }
            } else if(val1 < val2) {
                ans[idx++] = val1;
                i++;
            } else {
                ans[idx++] = val2;
                j--;
            }
            
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

        int a, b, c;
        cin >> a >> b >> c;
        cin.ignore();

        Solution obj;
        vector<int> ans = obj.sortArray(arr, a, b, c);
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << ' ';
        cout << endl;

        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends
