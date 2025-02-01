//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int aggressiveCows(vector<int> &stalls, int k) {
        // Write your code here
        int low=1, ans=0, temp=1, n=stalls.size();
        
        sort(stalls.begin(), stalls.end());
        
        int high = stalls[n - 1] - low;
        
        while(low <= high) {
            temp = stalls[0];
            int m = k-1, mid = low + (high - low) / 2;
            temp += mid;
            
            for(int i: stalls) {
                if(i >= temp) {
                    m--;
                    temp = i + mid;
                }
            }
            
            if(m <= 0) {
                ans = mid;
                low = mid + 1;
            }
            else high = mid - 1;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int k;
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string in;
        getline(cin, in);
        stringstream sss(in);
        int num;
        while (sss >> num) {
            k = num;
        }
        Solution ob;
        int ans = ob.aggressiveCows(arr, k);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
