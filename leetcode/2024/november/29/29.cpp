class Solution {
            vector<pair<int, int>> dirs = { 
                { 1, 0 }, 
                { -1, 0 }, 
                { 0, 1 }, 
                { 0, -1 } 
            };

public:
    int minimumTime(vector<vector<int>>& grid) {
        if(min(grid[0][1], grid[1][0]) > 1) return -1;

        int n = grid.size(), m = grid[0].size();
        priority_queue<vector<int>, vector<vector<int>>, greater<>> pq;
        pq.push({ 0, 0, 0 });
        set<pair<int, int>> visited;

        while(!pq.empty()) {
            auto curr = pq.top();
            pq.pop();
            int time = curr[0], i = curr[1], j = curr[2];

            if(i == n-1 && j == m-1) return time;

            for(auto dir: dirs) {
                int first = i + dir.first, second = j + dir.second;

                if(first < 0 || second < 0 || first == n
                 || second == m || visited.count({ first, second }))
                    continue;

                int wait = 0;
                if(abs(grid[first][second] - time)%2 == 0) wait = 1;

                int maxTime = max(grid[first][second] + wait, time+1);

                pq.push({ maxTime, first, second });
                visited.insert({ first, second });
            }
        }

        return -1;
    }
};
