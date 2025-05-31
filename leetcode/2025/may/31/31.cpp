class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) {
        int n = board.size(), lbl = 1;
        vector<pair<int, int>> cells(n*n+1);
        vector<int> columns(n);
        iota(columns.begin(), columns.end(), 0);

        for (int row = n - 1; row >= 0; row--) {
            for (int column : columns) cells[lbl++] = {row, column};

            reverse(columns.begin(), columns.end());
        }

        vector<int> ans(n*n+1, -1);
        ans[1] = 0;
        queue<int> q;
        q.push(1);

        while (!q.empty()) {
            int curr = q.front();
            q.pop();

            for (int i = curr + 1; i <= min(curr+6, n*n); i++) {
                auto [x, y] = cells[i];
                int temp = board[x][y];

                if(board[x][y] == -1) temp = i;
                if (ans[temp] == -1) {
                    ans[temp] = ans[curr] + 1;
                    q.push(temp);
                }
            }
        }
        return ans[n*n];
    }
};
