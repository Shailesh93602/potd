//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    static bool sortByVal(pair<int, int> &a, pair<int, int> &b) {
        return (a.second == b.second) ? a.first < b.first : a.second > b.second;
    }
    
    vector<int> sortByFreq(vector<int>& arr) {
        // Your code here
        int n = arr.size();
        unordered_map<int, int> map;
        vector<pair<int, int>> ans;
        
        for(int i: arr) map[i]++;
        
        copy(map.begin(), map.end(), back_inserter(ans));
        
        sort(ans.begin(), ans.end(), sortByVal);
        vector<int> res;
        
        for(auto i: ans) 
            for(int j=0; j<i.second; j++)
                res.push_back(i.first);
        
        return res;
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
        Solution obj;
        vector<int> v;
        v = obj.sortByFreq(arr);
        for (int i : v)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends
