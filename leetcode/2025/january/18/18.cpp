class Solution {
    vector<vector<int>> dirs = {
        { 0, 1 },
        { 0, -1 }, 
        { 1, 0 }, 
        { -1, 0 }
    };

public:
    int minCost(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>> ans(n, vector<int>(m, INT_MAX));
        deque<pair<int, int>> dq;
        dq.push_front({ 0, 0 });
        ans[0][0] = 0;

        while(!dq.empty()) {
            auto [row, col] = dq.front();
            dq.pop_front();

            for(int i=0; i<4; i++) {
                int x = row + dirs[i][0], y = col + dirs[i][1];
                int cost = 1;
                
                if(grid[row][col] == i + 1) cost = 0;

                if(x >= 0 && y >= 0 && x < n && y < m && ans[row][col] + cost < ans[x][y]) {
                    ans[x][y] = ans[row][col] + cost;

                    if(cost == 1) dq.push_back({ x, y });
                    else dq.push_front({ x, y });
                }
            }
        }

        return ans[n-1][m-1];
    }
};
