class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        vector<int> ans;
        unordered_map<int, int> colorMap, ballMap;

        for(auto q: queries) {
            if(ballMap.find(q[0]) != ballMap.end()) {
                int prevColor = ballMap[q[0]];
                colorMap[prevColor]--;

                if(colorMap[prevColor] == 0) colorMap.erase(prevColor);
            }

            ballMap[q[0]] = q[1];
            colorMap[q[1]]++;
            ans.push_back(colorMap.size());
        }

        return ans;
    }
};
