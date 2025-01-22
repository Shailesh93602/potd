class Solution {
    bool isValid(int i, int j, int n, int m) {
        return i >= 0 && j >= 0 && i < n && j < m;
    }
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int n = isWater.size(), m = isWater[0].size();
        vector<vector<int>> ans(n, vector<int>(m, n*m));

        for(int i=0; i<n; i++) 
            for(int j=0; j<m; j++) 
                if(isWater[i][j]) 
                    ans[i][j] = 0;

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                int minDis = n*m, row = i-1, col = j;
                if(isValid(row, col, n, m)) 
                    minDis = min(minDis, ans[row][col]);

                row = i, col = j-1;
                if(isValid(row, col, n, m)) 
                    minDis = min(minDis, ans[row][col]);

                ans[i][j] = min(ans[i][j], minDis + 1);
            }
        }

        for(int i=n-1; i>=0; i--) {
            for(int j=m-1; j>=0; j--) {
                int minDis = n*m, row = i+1, col = j;
                if(isValid(row, col, n, m)) 
                    minDis = min(minDis, ans[row][col]);

                row = i, col = j+1;
                if(isValid(row, col, n, m)) 
                    minDis = min(minDis, ans[row][col]);
                
                ans[i][j] = min(ans[i][j], minDis + 1);
            }
        }

        return ans;
    }
};
