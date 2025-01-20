class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        unordered_map<int, int> map;

        for(int i=0; i<arr.size(); i++) map[arr[i]] = i;

        int ans = INT_MAX, n = mat.size(), m = mat[0].size();

        for(int i=0; i<n; i++) {
            int maxVal = INT_MIN;

            for(int j=0; j<m; j++) maxVal = max(maxVal, map[mat[i][j]]);

            ans = min(ans, maxVal);
        }

        for(int j=0; j<m; j++) {
            int maxVal = INT_MIN;

            for(int i=0; i<n; i++) maxVal = max(maxVal, map[mat[i][j]]);

            ans = min(ans, maxVal);
        }

        return ans;
    }
};
