//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int sameOccurrence(vector<int>& arr, int x, int y) {
        // code here
        int n = arr.size();
        
        vector<int> arr1(n), arr2(n);
        map<int, int> map;
        
        for(int i=0; i<n; i++) {
            if(arr[i] == x) {
                if(i == 0) arr1[i] = 1;
                else arr1[i] = arr1[i-1]+1;
            }
            else if(i == 0) arr1[i] = 0;
            else arr1[i] = arr1[i-1];
            
            if(arr[i] == y) {
                if(i == 0) arr2[i] = 1;
                else arr2[i] = arr2[i-1]+1;
            }
            else if(i == 0) arr2[i] = 0;
            else arr2[i] = arr2[i-1];
            
            map[arr1[i] - arr2[i]]++;
        }
        
        int ans = map[0];
        
        for(auto it=map.begin(); it!=map.end(); it++) {
            long long freq = it->second;
            
            ans += (freq * (freq - 1)) / 2LL;
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
        string ks;
        getline(cin, ks);
        int x = stoi(ks);
        string ks1;
        getline(cin, ks1);
        int y = stoi(ks1);
        Solution ob;
        int ans = ob.sameOccurrence(arr, x, y);
        cout << ans << "\n";
        // cout<<"~"<<endl;
    }
    return 0;
}
// } Driver Code Ends
