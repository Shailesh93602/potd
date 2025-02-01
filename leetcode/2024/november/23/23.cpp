class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int m = box.size();
        int n = box[0].size();
        vector<vector<char>> ans(n, vector<char>(m, '.'));

        for(int i=0; i<m; i++) {
            int minVal = n-1;

            for(int j=n-1; j>=0; j--) {
                if(box[i][j] == '#') {
                    ans[minVal][m-i-1] = '#';
                    minVal--;
                }
                else if(box[i][j] == '*') {
                    ans[j][m-i-1] = '*';
                    minVal = j-1;
                }
            }
        }

        return ans;
    }
};
