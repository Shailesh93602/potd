//{ Driver Code Starts

#include <iostream>
#include <regex>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string compareFrac(string str) {
        // Code here
        vector<int> arr(4, 0);
        regex re("([0-9]+)\\/([0-9]+), ([0-9]+)\\/([0-9]+)",
                 regex_constants::ECMAScript);
        smatch sm;

        if (regex_search(str, sm, re)) {
            arr[0] = stoi(sm[1]);
            arr[1] = stoi(sm[2]);
            arr[2] = stoi(sm[3]);
            arr[3] = stoi(sm[4]);
        }

        string ans = "";

        if (arr[0] * arr[3] > arr[1] * arr[2]) {
            ans += to_string(arr[0]);
            ans += "/";
            ans += to_string(arr[1]);
        } 
        else if (arr[1] * arr[2] > arr[0] * arr[3]) {
            ans += to_string(arr[2]);
            ans += "/";
            ans += to_string(arr[3]);
        } 
        else ans = "equal";

        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    Solution ob;
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) {

        string str;
        getline(cin, str);

        cout << ob.compareFrac(str) << endl;
    }
    return 0;
}

// } Driver Code Ends
