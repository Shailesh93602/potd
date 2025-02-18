//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
    int findDis(vector<int> &point) {
        return point[0] * point[0] + point[1] * point[1];
    }
  public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // Your code here
        priority_queue<pair<int, vector<int>>> pq;
        
        for(vector<int> point: points) {
            int dis = findDis(point);
            
            if(pq.size() < k) pq.push({ dis, point });
            else {
                if(dis < pq.top().first) {
                    pq.pop();
                    pq.push({ dis, point });
                }
            }
        }
        
        vector<vector<int>> ans;
        
        while(!pq.empty()) {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        int n;
        cin >> n;
        vector<vector<int>> points(n, vector<int>(2));
        for (int i = 0; i < n; i++) {
            cin >> points[i][0] >> points[i][1];
        }
        Solution ob;
        vector<vector<int>> ans = ob.kClosest(points, k);
        sort(ans.begin(), ans.end());
        for (const vector<int>& point : ans) {
            cout << point[0] << " " << point[1] << endl;
        }
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends
