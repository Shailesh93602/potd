class Solution {
public:
    int maxScore(string s) {
        int n = s.size(), maxVal = INT_MIN;
        int count0 = 0, count1 = 0;

        for(int i=0; i<n-1; i++) {
            if(s[i] == '1') count1++;
            else count0++;

            maxVal = max(maxVal, count0 - count1);
        }

        if(s[n - 1] == '1') count1++;

        return maxVal + count1;
    }
};
