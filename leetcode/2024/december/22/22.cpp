class Solution {
public:
    vector<int> leftmostBuildingQueries(vector<int>& heights, vector<vector<int>>& queries) {
        int n = heights.size(), m = queries.size();
        vector<vector<vector<int>>> res(n);
        priority_queue<vector<int>, 
                    vector<vector<int>>, 
                    greater<vector<int>>> pq;
        vector<int> ans(m, -1);
        
        for(int i=0; i<m; i++) {
            int a = queries[i][0], b = queries[i][1];
            int first = heights[a], second = heights[b];

            if(a < b && first < second) ans[i] = b;
            else if(a > b && first > second) ans[i] = a;
            else if(a == b) ans[i] = a;
            else res[max(a, b)].push_back({ max(first, second), i });
        }

        for(int i=0; i<n; i++) {
            while(!pq.empty() && pq.top()[0] < heights[i]) {
                ans[pq.top()[1]] = i;
                pq.pop();
            }

            for(auto &e: res[i]) pq.push(e);
        }

        return ans;
    }
};
