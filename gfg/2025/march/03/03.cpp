//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> longestSubarray(vector<int>& arr, int x) {
        // code here
        deque<int> minQ, maxQ;
        int n = arr.size(), i = 0, j = 0;
        int start = 0, end = 0;
        
        while(j < n) {
            while(!minQ.empty() && arr[minQ.back()] > arr[j])
                minQ.pop_back();
            while(!maxQ.empty() && arr[maxQ.back()] < arr[j]) 
                maxQ.pop_back();
            
            minQ.push_back(j);
            maxQ.push_back(j);
            
            while(arr[maxQ.front()] - arr[minQ.front()] > x) {
                if(i == minQ.front()) minQ.pop_front();
                if(i == maxQ.front()) maxQ.pop_front();
                
                i++;
            }
            
            if(j - i > end - start) {
                start = i;
                end = j;
            }
            
            j++;
        }
        
        vector<int> ans;
        for(i=start; i<=end; i++) ans.push_back(arr[i]);
        
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
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        vector<int> ans = ob.longestSubarray(arr, k);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends
