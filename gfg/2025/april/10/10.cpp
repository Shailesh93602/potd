//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int minCost(vector<vector<int>>& houses) {
        // code here
        int n = houses.size(), ans = 0;
        vector<bool> visited(n, false);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
        pq.push({ 0, 0 });
        
    
        while(!pq.empty()) {
            auto x = pq.top();
            pq.pop();
            int cost = x.first, i = x.second;
            
            if(!visited[i]) {
                visited[i] = true;
                ans += cost;
                
                for(int j=0; j<n; j++) {
                    if(!visited[j]) {
                        int dis = abs(houses[i][0] - houses[j][0]) + 
                                  abs(houses[i][1] - houses[j][1]);
                        pq.push({ dis, j });
                    }
                }
            }
        }
        
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> edges;

        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int j = 0; j < 2; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        Solution obj;

        cout << obj.minCost(edges);
        cout << "\n";
        cout << "~" << endl;
    }
}

// } Driver Code Ends
