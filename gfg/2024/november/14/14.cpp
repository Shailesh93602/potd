//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    void nearlySorted(vector<int>& arr, int k) {
        // code
        int n = arr.size();
        priority_queue<int, vector<int>, greater<int>> 
            pq(arr.begin(), arr.begin()+k+1);
        
        int i = 0;
        for(int j=k+1; j<n; j++) {
            arr[i++] = pq.top();
            pq.pop();
            
            pq.push(arr[j]);
        }
        
        while(!pq.empty()) {
            arr[i++] = pq.top();
            pq.pop();
        }
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
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution obj;
        obj.nearlySorted(arr, k);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends
