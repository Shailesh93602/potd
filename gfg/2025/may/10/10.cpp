//Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

//Driver Code Ends

// User function Template for C++
class Solution {
  public:
    int longestSubarray(vector<int> &arr, int k) {
        // Code here
        int n = arr.size();
        unordered_map<int, int> prefIdx;
        int sum = 0, res = 0;

        for (int i = 0; i < n; i++) {
          sum += (arr[i] > k ? 1 : -1);

          if (prefIdx.find(sum) == prefIdx.end()) prefIdx[sum] = i;
        }
  
        if(prefIdx.find(-n) != prefIdx.end()) return 0;
  
	    prefIdx[-n] = n;
  
        for(int i = -n + 1; i <= n; i++) {
          if(prefIdx.find(i) == prefIdx.end()) prefIdx[i] = prefIdx[i - 1];
        else prefIdx[i] = min(prefIdx[i], prefIdx[i - 1]);
    }
    
      sum = 0;
      for(int i = 0; i < n; i++) {
    	sum += (arr[i] > k ? 1 : -1);
        if(sum > 0) res = i + 1;
        else res = max(res, i - prefIdx[sum - 1]);
      }
    
      return res;
    }
};

//Driver Code Starts


int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        int k = stoi(input);

        Solution ob;
        cout << ob.longestSubarray(arr, k) << endl;
        cout << "~" << endl;
    }
    return 0;
}

//Driver Code Ends