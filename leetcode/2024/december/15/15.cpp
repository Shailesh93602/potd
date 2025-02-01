class Solution {
public:
    static double increment(int pass, int total) {
        return (pass + 1.0) / (total + 1) - (double)pass / total;
    }
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        priority_queue<pair<double, pair<int, int>>> pq;

        for (auto x: classes) 
            pq.push({ increment(x[0], x[1]), { x[0], x[1] }});

        while(extraStudents--) {
            auto [_, classInfo] = pq.top();
            pq.pop();

            int pass = classInfo.first + 1;
            int total = classInfo.second + 1;

            pq.push({ increment(pass, total), { pass, total }});
        }
        
        double sum = 0.0;
        
        while(!pq.empty()) {
            auto [_, classInfo] = pq.top();
            pq.pop();

            int pass = classInfo.first;
            int total = classInfo.second;

            sum += (double)pass / total;
        }

        return sum / classes.size();
    }
};
