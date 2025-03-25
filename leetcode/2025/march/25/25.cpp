class Solution {
     bool check(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        
        int count = 0, end = intervals[0][1];
        
        for (auto& x : intervals) {
            int i = x[0], j = x[1];

            if (end <= i) count++;
            
            end = max(end, j);
        }
        
        return count >= 2;
    }
public:
    bool checkValidCuts(int n, vector<vector<int>>& rectangles) {
        vector<vector<int>> x, y;
        
        for (auto& rect : rectangles) {
            x.push_back({ rect[0], rect[2] });
            y.push_back({ rect[1], rect[3] });
        }
        
        return check(x) || check(y);
    }
};
