class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        priority_queue<pair<double, pair<int, int>>, vector<pair<double, pair<int, int>>>, greater<>> minHeap;
        int n = arr.size();
        for(int i=0; i<n; i++) {
            for(int j=i+1; j<n; j++) {
                minHeap.push({(double)arr[i]/arr[j], {arr[i], arr[j]}});
            }
        }

        pair<int, int> ans;
        while(k--) {
            ans = minHeap.top().second;
            minHeap.pop();
        }

        return {ans.first, ans.second};
    }
};
