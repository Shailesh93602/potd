class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        int maxVal = INT_MAX;
        vector<vector<int>> ans = {{ 0, 0, maxVal }};
        sort(items.begin(), items.end());

        for(auto item: items) {
            if(item[1] > ans.back()[1]) {
                ans.back()[2] = item[0];
                ans.push_back({ item[0], item[1], maxVal });
            }
        }

        vector<int> res;

        for(int q: queries) {
            for(int i=ans.size()-1; i>=0; i--) {
                if(ans[i][0] <= q) {
                    res.push_back(ans[i][1]);
                    break;
                }
            }
        }

        return res;
    }
};
