class Solution {
public:
    void solve(int i, vector<int> &visited, vector<vector<int>> &stones, int n) {
        visited[i] = 1;
        for(int j=0; j<n; j++) 
            if(!visited[j])
                if(stones[i][0] == stones[j][0] || stones[i][1] == stones[j][1])
                    solve(j, visited, stones, n);
    }
    int removeStones(vector<vector<int>>& stones) {
        int n = stones.size();
        vector<int> visited(n, 0);
        int ans = 0;
        for(int i=0; i<n; i++) {
            if(!visited[i]) {
                solve(i, visited, stones, n);
                ans++;
            }
        }

        return n - ans;
    }
};
