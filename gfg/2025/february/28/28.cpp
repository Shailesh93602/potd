//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int evaluate(vector<string>& arr) {
        // code here
        stack<int> st;
        
        for(string s: arr) {
            if(isdigit(s[0]) || (s.size() > 1 && s[0] == '-')) 
                st.push(stoi(s));
            else {
                int val1 = st.top();
                st.pop();
                int val2 = st.top();
                st.pop();
                
                if(s == "+") st.push(val1 + val2);
                else if(s == "-") st.push(val2 - val1);
                else if(s == "*") st.push(val1 * val2);
                else if(s == "/") st.push(val2 / val1);
            }
        }
        
        return st.top();
    }
};


//{ Driver Code Starts.

int main() {
    string str;
    getline(cin, str);
    int t = stoi(str);
    while (t--) {
        getline(cin, str);
        stringstream ss(str);
        vector<string> arr;
        while (ss >> str) {
            arr.push_back(str);
        }
        Solution ob;
        cout << ob.evaluate(arr) << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends
