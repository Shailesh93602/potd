class Solution {
public:
    vector<bool> checkIfPrerequisite(int n, vector<vector<int>>& pre, vector<vector<int>>& queries) {
        vector<vector<bool>> ans(n, vector<bool>(n, false));

        for(auto x: pre) ans[x[0]][x[1]] = true;

        for(int i=0; i<n; i++) 
            for(int j=0; j<n; j++) 
                for(int k=0; k<n; k++) 
                    ans[j][k] = ans[j][k] || (ans[j][i] && ans[i][k]);

        vector<bool> res;
        for(auto q: queries) res.push_back(ans[q[0]][q[1]]);

        return res;
    }
};
