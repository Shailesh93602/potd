class Solution {
public:
    int n, m;
    void solve(vector<vector<int>> &land, vector<int> &temp, int i, int j) {
        if(i < 0 || i > n-1 || j < 0 || j > m-1) return;
        if(land[i][j] == 1) {
            land[i][j] = 2;
            temp[0] = min(temp[0], i);
            temp[1] = min(temp[1], j);
            temp[2] = max(temp[2], i);
            temp[3] = max(temp[3], j);
            solve(land, temp, i+1, j);
            solve(land, temp, i, j+1);
            solve(land, temp, i-1, j);
            solve(land, temp, i, j-1);
        }
    }
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        vector<vector<int>> ans;
        if(land.empty() || land[0].empty()) return ans;
        n = land.size();
        m = land[0].size();
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(land[i][j] == 1) {
                    vector<int> temp{i, j, i, j};
                    solve(land, temp, i, j);
                    ans.push_back(temp);
                } 
            }
        }
        return ans;
    }
};
