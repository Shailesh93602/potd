class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> res;
        int ans = 0;

        for(int i=0; i<grid.size(); i++) {
            for(int j=0; j<grid[0].size(); j++) {
                if(grid[i][j]%x != grid[0][0]%x) return -1;

                res.push_back(grid[i][j]);
            }
        }

        sort(res.begin(), res.end());

        int len = res.size();
        int i = 0, j = len - 1;

        while(i < j) {
            if(i < len - j - 1) ans += (i + 1) * (res[i+1] - res[i++]) / x;
            else ans += (len - j) * (res[j] - res[--j]) / x;
        }

        return ans;
    }
};
