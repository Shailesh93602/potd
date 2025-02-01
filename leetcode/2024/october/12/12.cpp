class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        int start = INT_MAX, end = INT_MIN;

        for(auto interval: intervals) {
            start = min(start, interval[0]);
            end = max(end, interval[1]);
        }

        vector<int> pointToCount(end+2, 0);
        for(auto interval: intervals) {
            pointToCount[interval[0]]++;
            pointToCount[interval[1]+1]--;
        }

        int temp = 0, ans = 0;
        for(int i=start; i<=end; i++) {
            temp += pointToCount[i];
            ans = max(ans, temp);
        }

        return ans;
    }
};
