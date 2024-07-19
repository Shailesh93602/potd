class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> minPos(n, -1);
        for(int i=0; i<n; i++) {
            int p = min_element(matrix[i].begin(), matrix[i].end())
                    - matrix[i].begin();
            minPos[i] = p;
        }

        vector<int> ans;
        for(int i=0; i<n; i++) {
            int p = minPos[i];
            int x = matrix[i][p];
            bool lucky = 1;
            for(int j=0; j<n; j++) {
                if(matrix[j][p] > x) {
                    lucky = 0;
                    break;
                }
            }
            if(lucky) ans.push_back(x);
        }
        return ans;
    }
};
