class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
        int n = quality.size();
        vector<pair<double, int>> ratio;

        for(int i=0; i<n; i++) {
            ratio.emplace_back(static_cast<double>(wage[i]) / quality[i], i);
        }

        sort(ratio.begin(), ratio.end());
        priority_queue<int> maxHeap;
        
        int sum = 0;
        double maxRate = 0.0;

        for(int i=0; i<k; i++) {
            sum += quality[ratio[i].second];
            maxRate = max(maxRate, ratio[i].first);
            maxHeap.push(quality[ratio[i].second]);
        }

        double ans = maxRate * sum;
        for(int i=k; i<n; i++) {
            maxRate = max(maxRate, ratio[i].first);
            sum -= maxHeap.top();
            maxHeap.pop();

            sum += quality[ratio[i].second];
            maxHeap.push(quality[ratio[i].second]);
            ans = min(ans, maxRate * sum);
        }

        return ans;
    }
};
