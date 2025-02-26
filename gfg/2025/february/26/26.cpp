//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    vector<int> maxOfMins(vector<int>& arr) {
        // Your code here
        int n = arr.size();
        vector<int> ans(n, 0), len(n, 0);
        stack<int> st;
        
        for(int i=0; i<n; i++) {
            while(!st.empty() && arr[st.top()] >= arr[i]) {
                int top = st.top();
                st.pop();
                
                int size = i;
                if(!st.empty()) size -= (st.top() + 1);
                len[top] = size;
            }
            
            st.push(i);
        }
        
        while(!st.empty()) {
            int top = st.top();
            st.pop();
            
            int size = n;
            if(!st.empty()) size -= (st.top() + 1);
            len[top] = size;
        }
        
        for(int i=0; i<n; i++) {
            int size = len[i] - 1;
            ans[size] = max(ans[size], arr[i]);
        }
        
        for(int i=n-2; i>=0; i--) ans[i] = max(ans[i], ans[i+1]);
        
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution ob;
        vector<int> res = ob.maxOfMins(arr);
        for (int i : res)
            cout << i << " ";
        cout << endl;
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends
