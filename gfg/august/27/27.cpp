//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    /*You are required to complete this method */
    int findMaxDiff(vector<int> &arr) {
        // Your code here
        int n = arr.size();
        vector<int> leftSmall(n, 0);
        vector<int> rightSmall(n, 0);
        stack<int> st;
        st.push(0);
        
        for(int i=1; i<n; i++) {
            while(!st.empty() && arr[st.top()] > arr[i]) {
                leftSmall[st.top()] = arr[i];
                st.pop();
            }
            
            st.push(i);
        }
        
        while(!st.empty()) {
            leftSmall[st.top()] = 0;
            st.pop();
        }
        
        for(int i=0; i<n/2; i++) {
            int temp = arr[i];
            arr[i] = arr[n-i-1];
            arr[n-i-1] = temp;
        }

        st.push(0);
        
        for(int i=1; i<n; i++) {
            while(!st.empty() && arr[st.top()] > arr[i]) {
                rightSmall[st.top()] = arr[i];
                st.pop();
            }
            
            st.push(i);
        }
        
        while(!st.empty()) {
            rightSmall[st.top()] = 0;
            st.pop();
        }
        
        for(int i=0; i<n/2; i++) {
            int temp = rightSmall[i];
            rightSmall[i] = rightSmall[n-i-1];
            rightSmall[n-i-1] = temp;
        }
        
        int ans = INT_MIN;
        
        for(int i=0; i<n; i++) ans = max(ans, abs(leftSmall[i] - rightSmall[i]));
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.findMaxDiff(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends
