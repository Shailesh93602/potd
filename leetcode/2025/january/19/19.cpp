class comp {
    public:
        bool operator()(vector<int> a, vector<int> b) {
            return a[0] >= b[0];
        }
};

class Solution {
public:
    int trapRainWater(vector<vector<int>>& heightMap) {
        priority_queue<vector<int>, vector<vector<int>>, comp> pq;
        int n = heightMap.size(), m = heightMap[0].size();
        vector<vector<bool>> visited(n, vector<bool>(m, false));

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(i == 0 || j == 0 || i == n-1 || j == m-1) {
                    pq.push({ heightMap[i][j], i, j });
                    visited[i][j] = true;
                }
            }
        }

        vector<int> dx = { 0, 0, 1, -1 }, dy = { 1, -1, 0, 0 };
        int ans = 0;

        while(!pq.empty()) {
            auto temp = pq.top();
            pq.pop();
            int h = temp[0], x = temp[1], y = temp[2];

            for(int i=0; i<4; i++) {
                int newX = dx[i] + x;
                int newY = dy[i] + y;

                if(newX >= 0 && newY >= 0 && newX < n && newY < m && !visited[newX][newY]) {
                    visited[newX][newY] = true;

                    if(heightMap[newX][newY] < h) {
                        pq.push({ h, newX, newY });
                        ans += h - heightMap[newX][newY];
                    }
                    else pq.push({ heightMap[newX][newY], newX, newY });
                }
            }
        }

        return ans;
    }
};
