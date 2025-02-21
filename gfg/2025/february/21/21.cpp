//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        stack<char> st;
        
        for(char ch: s) {
            if(ch == '(' || ch == '[' || ch == '{') st.push(ch);
            else if(!st.empty()) {
                char top = st.top();
                if((top == '(' && ch == ')') || 
                    (top == '[' && ch == ']') || 
                        (top == '{' && ch == '}')) st.pop();
                else return false;
            }
            else return false;
        }
        
        return st.empty();
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string a;
    cin >> t;
    while (t--) {
        cin >> a;
        Solution obj;
        if (obj.isBalanced(a))
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends
