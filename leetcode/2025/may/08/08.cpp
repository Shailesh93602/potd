class Solution {
    vector<vector<int>> dirs = {
        { -1, 0 },
        { 1, 0 },
        { 0, -1 },
        { 0, 1 }
    };
public:
    int minTimeToReach(vector<vector<int>>& moveTime) {
        int n = moveTime.size(), m = moveTime[0].size();
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
        pq.push({ 0, 0, 0, 0 });
        vector<vector<int>> ans(n, vector<int>(m, INT_MAX));
        ans[0][0] = 0;

        while(!pq.empty()) {
            auto it = pq.top();
            int time = it[0], r = it[1], c = it[2], flag = it[3];
            pq.pop();

            if(r == n-1 and c == m-1) return time;

            for(int i=0; i<4; i++) {
                int nr = r + dirs[i][0], nc = c + dirs[i][1];

                if(nr >= 0 and nr < n and nc >= 0 and nc < m) {
                    int nTime = max(time, moveTime[nr][nc]) + 1;
                    if(flag & 1) nTime++;

                    if(ans[nr][nc] > nTime) {
                        ans[nr][nc] = nTime;
                        pq.push({ nTime, nr, nc, flag + 1 });
                    }
                }
            }
        }

        return -1;
    }
};
