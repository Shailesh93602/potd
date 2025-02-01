//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    string solve(string s1, string s2) {
        int n = s1.length(), m = s2.length();
        
        if(n > m) return solve(s2, s1);

        string ans = "";
        int diff = m - n;
        int carry = 0;
        
        for(int i=n-1; i>=0; i--) {
            int sum = ((s1[i] - '0') + (s2[i+diff] - '0') + carry);
            carry = sum/10;
            ans.push_back(sum%10 + '0');
        }
        
        for(int i=m-n-1; i>=0; i--) {
            int sum = ((s2[i] - '0') + carry);
            carry = sum/10;
            ans.push_back(sum%10 + '0');
        }
        
        if(carry) ans.push_back(carry + '0');
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
    string minSum(vector<int> &arr) {
        // code here
        sort(arr.begin(), arr.end());
        string num1, num2;
        
        for(int i=0; i<arr.size(); i++) {
            if(arr[i] == 0 && i != arr.size()) continue;
            if(i%2 == 0) {
                num1 += '0' + arr[i];
            }
            else {
                num2 += '0' + arr[i];
            }
        }
        
        return solve(num1, num2);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution ob;
        string ans = ob.minSum(a);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
