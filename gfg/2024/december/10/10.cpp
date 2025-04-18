//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    static bool greater(vector<int> a, vector<int> b) {
        return a[1] < b[1];
    }
    int minRemoval(vector<vector<int>> &intervals) {
        // code here
        sort(intervals.begin(), intervals.end(), greater);
        int count = 0, j=0;
        
        for(int i=1; i<intervals.size(); i++) {
            if(intervals[i][0] < intervals[j][1]) count++;
            else j = i;
        }
        
        return count;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<vector<int>> intervals(N, vector<int>(2));
        for (int i = 0; i < N; i++) {
            cin >> intervals[i][0] >> intervals[i][1];
        }
        Solution obj;
        cout << obj.minRemoval(intervals) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends
