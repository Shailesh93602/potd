class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime) {
        int n = startTime.size(), ans = 0;
        vector<int> res(n + 1, 0);

        for(int i=0; i<n; i++) res[i + 1] = res[i] + (endTime[i] - startTime[i]);

        for(int i=k-1; i<n; i++) {
            int left = 0, right = eventTime;

            if(i != k-1) left = endTime[i - k];
            if(i != n-1) right = startTime[i + 1];

            int temp = right - left - (res[i + 1] - res[i - k + 1]);
            ans = max(ans, temp);
        }

        return ans;
    }
};
