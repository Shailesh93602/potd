class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double totalTime = 0;
        int currTime = 0;

        for(auto &c: customers) {
            int arrival = c[0];
            int service = c[1];
            if(currTime < arrival) currTime = arrival;

            int waitingTime = currTime - arrival + service;
            totalTime += waitingTime;
            currTime += service;
        }
        return totalTime / customers.size();
    }
};
