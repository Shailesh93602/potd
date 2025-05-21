class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();

        bool isRow = false, isCol = false;

        for(int i=0; i<n; i++) {
            if(matrix[0][i] == 0) {
                isRow = true;
                break;
            }
        }

        for(int i=0; i<m; i++) {
            if(matrix[i][0] == 0) {
                isCol = true;
                break;
            }
        }

        for(int i=1; i<m; i++) {
            auto &row = matrix[i];
            for(int j=1; j<n; j++) {
                if(row[j] == 0) {
                    row[0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        for(int i=1; i<m; i++) {
            auto &row = matrix[i];
            
            if(row[0] == 0) {
                for(int j=1; j<n; j++) {
                    row[j] = 0;
                }
            }
        }

        for(int j=1; j<n; j++) {
            if(matrix[0][j] == 0) {
                for(int i=1; i<m; i++) {
                    matrix[i][j] = 0;
                }
            }
        }

        if(isRow) for(int i=0; i<n; i++) matrix[0][i] = 0;
        if(isCol) for(int i=0; i<m; i++) matrix[i][0] = 0;
    }
};
