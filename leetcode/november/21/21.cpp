class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> ans(m, vector<int>(n, 0));

        for(vector<int> x: guards) ans[x[0]][x[1]] = 2;
        for(vector<int> x: walls) ans[x[0]][x[1]] = 2;
        
        for(vector<int> x: guards) {
            int cx = x[0];
            int cy = x[1];

            for(int i=cx+1; i<m; i++) {
                if(ans[i][cy] == 2) break;
                ans[i][cy] = 1;
            }
            for(int i=cx-1; i>=0; i--) {
                if(ans[i][cy] == 2) break;
                ans[i][cy] = 1;
            }
            for(int j=cy+1; j<n; j++) {
                if(ans[cx][j] == 2) break;
                ans[cx][j] = 1;
            }
            for(int j=cy-1; j>=0; j--) {
                if(ans[cx][j] == 2) break;
                ans[cx][j] = 1;
            }
        }

        int count = 0;
        for(vector<int> x: ans) for(int i: x) if(i == 0) count++;

        return count;
    }
};
