class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        int ans = 0, x = 0;
        sort(meetings.begin(), meetings.end());

        for(auto meeting: meetings) {
            int i = meeting[0], j = meeting[1];

            if(i > x + 1) ans += i - x - 1;

            x = max(x, j);
        }

        ans +=  days - x;

        return ans;
    }
};class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        int ans = 0, x = 0;
        sort(meetings.begin(), meetings.end());

        for(auto meeting: meetings) {
            int i = meeting[0], j = meeting[1];

            if(i > x + 1) ans += i - x - 1;

            x = max(x, j);
        }

        ans +=  days - x;

        return ans;
    }
};class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        int ans = 0, x = 0;
        sort(meetings.begin(), meetings.end());

        for(auto meeting: meetings) {
            int i = meeting[0], j = meeting[1];

            if(i > x + 1) ans += i - x - 1;

            x = max(x, j);
        }

        ans +=  days - x;

        return ans;
    }
};
