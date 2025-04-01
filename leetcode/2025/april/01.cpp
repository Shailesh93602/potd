class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        int n = questions.size();
        vector<long long> ans(n);
        ans[n-1] = questions[n-1][0];

        for(int i=n-2; i>=0; i--) {
            ans[i] = questions[i][0];
            int skip = questions[i][1];

            if(i + skip < n-1) ans[i] += ans[i + skip + 1];

            ans[i] = max(ans[i], ans[i+1]);
        }

        return ans[0];
    }
};
