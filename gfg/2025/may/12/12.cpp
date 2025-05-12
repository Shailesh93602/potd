//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    int mostBooked(int n, vector<vector<int>> &meetings) {
        // code here
        vector<int> count(n, 0);
        priority_queue<pair<int, int>, vector<pair<int, int>>, 
  									greater<pair<int, int>>> pq;
        priority_queue<int, vector<int>, greater<int>> pq2;

        for (int i = 0; i < n; ++i) pq2.push(i);

        sort(meetings.begin(), meetings.end());

        for (auto &m: meetings) {
            int s = m[0], e = m[1];

            while (!pq.empty() && pq.top().first <= s) {
                pq2.push(pq.top().second);
                pq.pop();
            }

            if (!pq2.empty()) {
                int room = pq2.top();
                pq2.pop();
                pq.push({e, room});
                count[room]++;
            }
            else {
                int endTime = pq.top().first;
                int room = pq.top().second;
                pq.pop();
                pq.push({ endTime + (e - s), room });
                count[room]++;
            }
        }

        int maxCount = 0, ans = 0;
        for (int i=0; i<n; i++) {
            if (count[i] > maxCount) {
                maxCount = count[i];
                ans = i;
            }
        }

        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n;
        cin >> m;
        vector<vector<int>> meetings(m, vector<int>(2));
        for (int i = 0; i < m; i++) {
            cin >> meetings[i][0] >> meetings[i][1];
        }
        Solution ob;
        cout << ob.mostBooked(n, meetings) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
