//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    vector<int> bracketNumbers(string str) {
        // Your code goes here
        vector<int> ans;
        vector<int> temp;
        int count = 0;
        for(char s: str) {
            if(s == '(' || s == '[' || s == '{') {
                count++;
                temp.push_back(count);
                ans.push_back(count);
            }
            else if(s == ')' || s == ']' || s == '}') {
                ans.push_back(temp[temp.size()-1]);
                temp.pop_back();
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);

        Solution ob;

        vector<int> ans = ob.bracketNumbers(s);

        for (auto i : ans)
            cout << i << " ";

        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends
