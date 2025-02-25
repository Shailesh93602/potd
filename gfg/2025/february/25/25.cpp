//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int getMaxArea(vector<int> &arr) {
        // Your code here
        int n = arr.size(), ans = 0, top, curr;
        stack<int> st;

        for(int i=0; i<n; i++) {
            while(!st.empty() && arr[st.top()] >= arr[i]) {
                top = st.top();
                st.pop();
                
                int width = i;
                if(!st.empty()) width -= (st.top() + 1);
                
                ans = max(ans, arr[top] * width);
            }
            
            st.push(i);
        }
        
        while(!st.empty()) {
            top = st.top();
            st.pop();
            
            curr = arr[top] * n;
            if(!st.empty()) curr = arr[top] * (n - st.top() - 1);
            
            ans = max(ans, curr);
        }
        
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.getMaxArea(arr);
        cout << res << endl;
        cout << "~" << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends
