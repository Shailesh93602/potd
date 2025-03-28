class Solution {
public:
    vector<int> maxPoints(vector<vector<int>>& grid, vector<int>& queries) {
        int n = grid.size(), m = grid[0].size(), len = queries.size(), count = 0;
        vector<pair<int, int>> res;

        for (int i=0; i<len; i++) res.emplace_back(queries[i], i);
        
        sort(res.begin(), res.end());

        vector<int> ans(len, 0);
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<>> pq;
        vector<vector<bool>> visited(n, vector<bool>(m, false));

        pq.emplace(grid[0][0], make_pair(0, 0));
        visited[0][0] = true;
        vector<pair<int, int>> dirs = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

        for (auto& [x, i]: res) {
            while (!pq.empty() && pq.top().first < x) {
                auto [y, j] = pq.top();
                pq.pop();

                int row = j.first, col = j.second;
                count++;

                for (auto& [dr, dc]: dirs) {
                    int newRow = row + dr, newCol = col + dc;
                    if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < m && !visited[newRow][newCol]) {
                        pq.emplace(grid[newRow][newCol], make_pair(newRow, newCol));
                        visited[newRow][newCol] = true;
                    }
                }
            }

            ans[i] = count;
        }

        return ans;
    }
};
