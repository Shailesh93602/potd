class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int n = rowSum.size();
        int m = colSum.size();
        vector<vector<int>> ans(n, vector<int>(m, 0));

        for(int i=0, j=0; i<n && j<m; i+=(rowSum[i]==0), j+=(colSum[j]==0)) {
            int temp = min(rowSum[i], colSum[j]);
            ans[i][j] = temp;
            rowSum[i] -= temp;
            colSum[j] -= temp;
        }
        return ans;
    }
};
