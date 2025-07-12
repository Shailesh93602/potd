class Solution {
  public:
    void multiply(vector<vector<int>> &mat1, vector<vector<int>> &mat2) {
        int x = mat1[0][0] * mat2[0][0] + mat1[0][1] * mat2[1][0],
            y = mat1[0][0] * mat2[0][1] + mat1[0][1] * mat2[1][1],
            z = mat1[1][0] * mat2[0][0] + mat1[1][1] * mat2[1][0],
            w = mat1[1][0] * mat2[0][1] + mat1[1][1] * mat2[1][1];

        mat1[0][0] = x;
        mat1[0][1] = y;
        mat1[1][0] = z;
        mat1[1][1] = w;
    }

    void matrixPower(vector<vector<int>>& mat1, int n) {
        if (n == 0 || n == 1) return;

        vector<vector<int>> mat2 = {{1, 1}, {1, 0}};
        
        matrixPower(mat1, n / 2);
        multiply(mat1, mat1);

        if (n % 2 != 0) multiply(mat1, mat2);
    }

    int nthFibonacci(int n) {
        if (n <= 1) return n;

        vector<vector<int>> mat1 = {{1, 1}, {1, 0}};

        matrixPower(mat1, n - 1);

        return mat1[0][0];
    }

    int countConsec(int n) {
        int total = 1 << n, noConsec = nthFibonacci(n + 2);

        return total - noConsec;
    }
};
