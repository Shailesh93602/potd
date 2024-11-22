class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        unordered_map<string, int> map;

        for(auto& row: matrix) {
            string temp = "";

            for(int col=0; col<row.size(); col++) {
                if(row[0] == row[col]) temp += "T";
                else temp += "F";
            }

            map[temp]++;
        }

        int ans = 0;
        for(auto& it: map) ans = max(ans, it.second);

        return ans;
    }
};
