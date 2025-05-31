class Solution {
    int solve(const vector<vector<int>>& matrix, int x) {
        int n = matrix.size(), ans = 0, i = 0, j = n - 1;

        while (i < n && j >= 0) {
            if (matrix[i][j] <= x) {
                ans += (j + 1);
                i++;
            } else j--;
        }

        return ans;
    }
  public:
    int kthSmallest(vector<vector<int>> &matrix, int k) {
        // code here
        int n = matrix.size(), i = matrix[0][0], 
            j = matrix[n - 1][n - 1], ans = 0;

        while (i <= j) {
            int mid = i + (j - i) / 2;
            int count = solve(matrix, mid);
            
            if (count < k) i = mid + 1;
            else {
                ans = mid;
                j = mid - 1;
            }
        }

        return ans;
    }
};
