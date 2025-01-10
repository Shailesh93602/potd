//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here.
        int n = arr.size();
        vector<int> ans;
        unordered_map<int, int> map;
        
        for(int i=0; i<k; i++) map[arr[i]]++;
        
        ans.push_back(map.size());
        
        for(int i=k; i<n; i++) {
            map[arr[i]]++;
            
            if(map[arr[i-k]] == 1) map.erase(arr[i-k]);
            else map[arr[i-k]]--;
            
            ans.push_back(map.size());
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

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
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution obj;
        vector<int> res = obj.countDistinct(arr, k);
        for (auto it : res)
            cout << it << " ";
        cout << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends
