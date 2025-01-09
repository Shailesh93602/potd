//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int i=0, j=0, curr=0, n=arr.size();
        
        for(int k=0; k<n; k++) {
            curr += arr[k];
            
            if(curr >= target) {
                j = k;
                
                while(curr > target && i < j) curr -= arr[i++];
                
                if(curr == target) return { i+1, j+1 };
            }
        }
        
        return { -1 };
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        int d;
        string input;

        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        cin >> d;
        cin.ignore();

        Solution ob;
        vector<int> result = ob.subarraySum(arr, d);
        for (int i : result) {
            cout << i << " ";
        }
        cout << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends
