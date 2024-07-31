//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    string findPrefix(string s1, string s2) {
        string ans = "";
        for(int i=0; i<s1.length(), i<s2.length(); i++) {
            if(s1[i] == s2[i]) ans += s1[i];
            else break;
        }
        return ans;
    }
    string longestCommonPrefix(vector<string> arr) {
        // your code here
        string ans = arr[0];
        for(int i=1; i<arr.size(); i++) {
            ans = findPrefix(ans, arr[i]);
        }
        if(ans.length()) return ans;
        return "-1";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
    }
}

// } Driver Code Ends
