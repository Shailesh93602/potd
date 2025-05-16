//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

struct Node {
    int val, row, col;
        
    bool operator>(const Node &other) const {
        return val > other.val;
    }
};
    
class Solution {
  public:
    vector<int> findSmallestRange(vector<vector<int>>& arr) {
        // code here
        int n = arr.size(), k = arr[0].size(), maxVal = INT_MIN;
        priority_queue<Node, vector<Node>, greater<Node>> pq;
        
        for(int i=0; i<n; i++) {
            pq.push({ arr[i][0], i, 0 });
            maxVal = max(maxVal, arr[i][0]);
        }

        int minRange = INT_MAX, minEl, maxEl;
        
        while(true) {
            Node curr = pq.top();
            pq.pop();
            int minVal = curr.val;
            
            if(maxVal - minVal < minRange) {
                minRange = maxVal - minVal;
                minEl = minVal;
                maxEl = maxVal;
            }
            
            if(curr.col + 1 == k) break;
            
            int nextVal = arr[curr.row][curr.col + 1];
            pq.push({ nextVal, curr.row, curr.col + 1 });
            maxVal = max(maxVal, nextVal);
        }
        
        return { minEl, maxEl };
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<vector<int>> arr(k, vector<int>(n));

        for (int i = 0; i < k; i++)
            for (int j = 0; j < n; j++)
                cin >> arr[i][j];

        Solution obj;
        vector<int> range = obj.findSmallestRange(arr);
        cout << range[0] << " " << range[1] << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
