class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int n = values.size();
        int maxLeft = values[0], maxRight = 0;

        for(int i=1; i<n; i++) {
            int currRight = values[i] - i;
            int currLeft = values[i] + i;

            maxRight = max(maxRight, maxLeft + currRight);
            maxLeft = max(maxLeft, currLeft);
        }

        return maxRight;
    }
};
