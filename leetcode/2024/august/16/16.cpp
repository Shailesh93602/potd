class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int ans = INT_MIN;
        int minVal = arrays[0][0];
        int maxVal = arrays[0][arrays[0].size()-1];
        for(int i=1; i<arrays.size(); i++) {
            int first = arrays[i][0];
            int last = arrays[i][arrays[i].size()-1];
            ans = max(ans, maxVal-first);
            ans = max(ans, last-minVal);
            maxVal = max(maxVal, last);
            minVal = min(minVal, first);            
        }
        return ans;
    }
};
