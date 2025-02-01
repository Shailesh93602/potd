//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to count the number of subarrays which adds to the given sum.
    int subArraySum(vector<int>& arr, int tar) {
        // Your code here
        unordered_map<int, int> map;
        int n = arr.size();
        int count = 0, sum = 0;
        unordered_map<int, int>::iterator x;
        
        for(int i=0; i<n; i++) {
            sum += arr[i];
            if(sum == tar) count++;
            x = map.find(sum - tar);
            if(x != map.end()) count += x->second;
            
            map[sum]++;
        }
        
        return count;
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
        int tar = stoi(ks);
        Solution obj;
        int res = obj.subArraySum(arr, tar);
        cout << res << endl;
    }
    return 0;
}
// } Driver Code Ends
