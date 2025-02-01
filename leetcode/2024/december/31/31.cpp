class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n = days.size();
        int lastDay = days[n-1];
        vector<int> ans(lastDay + 1, 0);

        for(int i=0, j=1; j<=lastDay; j++) {
            if(j < days[i]) ans[j] = ans[j - 1];
            else {
                i++;
                ans[j] = min({ 
                    ans[j - 1] + costs[0], 
                    ans[max(0, j - 7)] + costs[1], 
                    ans[max(0, j - 30)] + costs[2]
                });
            }
        }

        return ans[lastDay];
    }
};
