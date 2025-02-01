class Solution {
public:
    int find(vector<vector<int>> &events, vector<int> &ev, int i) {
        int l=0, r=i-1, idx = -1;

        while(l <= r) {
            int mid = (l + r) / 2;
            if(events[mid][1] < ev[0]) {
                idx = mid;
                l = mid+1;
            }
            else r = mid - 1;
        }

        return idx;
    }
    static bool greater(vector<int> a, vector<int> b) {
        return a[1] < b[1];
    }
    int maxTwoEvents(vector<vector<int>>& events) {
        sort(events.begin(), events.end(), greater);

        int ans = events[0][2];

        for(int i=1; i<events.size(); i++) {
            int temp = events[i][2];
            events[i][2] = max(events[i][2], events[i-1][2]);

            int idx = find(events, events[i], i);

            if(idx == -1) ans = max(ans, events[i][2]);
            else ans = max(events[idx][2] + temp, ans);
        }

        return ans;
    }
};
