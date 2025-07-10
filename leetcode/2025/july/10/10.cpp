class Solution {
public:
    int maxFreeTime(int eventTime, vector<int>& startTime, vector<int>& endTime) {
        int n = startTime.size(), ans = 0, t1 = 0, t2 = 0;

        for(int i=0; i<n; i++) {
            int left1 = 0, right1 = eventTime;

            if(i != 0) left1 = endTime[i - 1];
            if(i != n-1) right1 = startTime[i + 1];

            if(endTime[i] - startTime[i] <= t1) ans = max(ans, right1 - left1);

            if(i == 0) t1 = max(t1, startTime[i]);
            else t1 = max(t1, startTime[i] - endTime[i - 1]);
            ans = max(ans, right1 - left1 - (endTime[i] - startTime[i]));

            int left2 = 0, right2 = eventTime;

            if(i != n-1) left2 = endTime[n - i - 2];
            if(i != 0) right2 = startTime[n - i];

            if(endTime[n - i - 1] - startTime[n - i - 1] <= t2) ans = max(ans, right2 - left2);

            if(i == 0) t2 = max(t2, eventTime - endTime[n - i - 1]);
            else t2 = max(t2, startTime[n - i] - endTime[n -i - 1]);
        }

        return ans;
    }
};
