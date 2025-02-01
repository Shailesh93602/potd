class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long score = 0;
        priority_queue<int> pq;
        for(int i: nums) pq.push(i);

        while(k--) {
            int maxElement = pq.top();
            pq.pop();
            score += maxElement;
            pq.push(ceil(maxElement/3.0));
        }

        return score;
    }
};
