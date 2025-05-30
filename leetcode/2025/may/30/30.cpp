class Solution {
    void solve(int i, int dis, vector<int> &edges, vector<int> &ans) {
        while(i != -1 && ans[i] == -1) {
            ans[i] = dis++;
            i = edges[i];
        }
    }
public:
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int n = edges.size(), minVal = INT_MAX, ans = -1;
        vector<int> res1(n, -1), res2(n, -1);

        solve(node1, 0, edges, res1);
        solve(node2, 0, edges, res2);

        for(int i=0; i<n; i++) {
            if(res1[i] >= 0 && res2[i] >= 0) {
                int maxDis = max(res1[i], res2[i]);

                if(maxDis < minVal) {
                    minVal = maxDis;
                    ans = i;
                }
            }
        }

        return ans;
    }
};
