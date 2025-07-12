class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {
        vector<int> count(n, 0);   
        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq1;
        priority_queue<int, vector<int>, greater<int>> pq2;

        for(int i=0; i<n; i++) pq2.push(i);

        sort(meetings.begin(), meetings.end());

        for(auto meet: meetings) {
            int i = meet[0], j = meet[1];

            while(!pq1.empty() && pq1.top().first <= i) {
                int x = pq1.top().second;
                pq1.pop();
                pq2.push(x);
            }

            if(!pq2.empty()) {
                int x = pq2.top();
                pq2.pop();
                pq1.push({ j , x });
                count[x]++;
            } else {
                auto [t, r] = pq1.top();
                pq1.pop();
                pq1.push({ t + j - i, r });
                count[r]++;
            }
        }

        int maxM = 0, maxR = 0;

        for(int i=0; i<n; i++) {
            if(count[i] > maxM) {
                maxM = count[i];
                maxR = i;
            }
        }

        return maxR;
    }
};
