class Solution {
public:
    int largestIsland(vector<vector<int>>& grid) {
        int n = grid.size(), idx = 2, ans = 0;
        unordered_map<int, int> map;

        function<int(int, int, int)> solve = [&](int i, int j, int x) {
            if(i < 0 || j < 0 || i >= n || j >= n || grid[i][j] != 1) return 0;

            grid[i][j] = x;

            return 1 + solve(i+1, j, x) + solve(i-1, j, x) 
                     + solve(i, j+1, x) + solve(i, j-1, x);
        };

        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(grid[i][j] == 1) {
                    map[idx] = solve(i, j, idx);
                    ans = max(ans, map[idx++]);
                }
            }
        }

        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(grid[i][j] == 0) {
                    unordered_set<int> visited;
                    int sum = 1;
                    vector<pair<int, int>> temp = { { 1, 0 }, { -1, 0 }, { 0, 1 }, { 0, -1 }};

                    for(auto [dx, dy]: temp)  {
                        int x = i+dx, y = j+dy;
                        if(x >= 0 && y >= 0 && x < n && y < n && grid[x][y] > 1 && visited.insert(grid[x][y]).second)
                        sum += map[grid[x][y]];
                    }
                    
                    ans = max(ans, sum);
                }
            }
        }

        return ans;
    }
};
