class Solution {
public:
    bool isMagicSquare(int r, int c, vector<vector<int>> &grid) {
        vector<int> rows(3, 0);
        vector<int> cols(3, 0);
        vector<int> diag(2, 0);
        vector<bool> s(10, false);

        for(int i=0; i<3; i++) {
            for(int j=0; j<3; j++) {
                int val = grid[r+i][c+j];
                if(val < 1 || val > 9 || s[val]) return false;
                s[val] = true;
                rows[i] += val;
                cols[j] += val;

                if(i == j) diag[0] += val;
                if(i + j == 2) diag[1] += val;
            }
        }

        return (rows[0] == rows[1] && rows[1] == rows[2]) &&
               (cols[0] == cols[1] && cols[1] == cols[2]) &&
               (diag[0] == diag[1]);
    }

    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;
        if(n < 3 || n < 3) return 0;
        for(int i=0; i<n-2; i++)
            for(int j=0; j<m-2; j++)
                ans += isMagicSquare(i, j, grid);
        
        return ans;
    }
};
