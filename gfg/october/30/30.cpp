//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    /* Returns count of pairs with difference k  */
    int countPairsWithDiffK(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int maxVal = 0, count = 0;
        
        for(int i: arr) maxVal = max(maxVal, i);
        
        vector<int> hash(maxVal + 1, 0);
        
        for(int i: arr) hash[i]++;
        for(int i=0; i<=maxVal; i++) {
            if(hash[i]) {
                if(i == i+k) count += (hash[i] * (hash[i]- 1)) / 2;
                else if(i + k <= maxVal) count += (hash[i] * hash[i+k]);
            }
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
        int k = stoi(ks);
        Solution ob;
        auto ans = ob.countPairsWithDiffK(arr, k);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
