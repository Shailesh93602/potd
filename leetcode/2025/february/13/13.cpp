class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long, vector<long>, greater<long>> pq(nums.begin(), nums.end());
        int ans = 0;

        while(pq.top() < k) {
            long first = pq.top();
            pq.pop();
            long second = pq.top();
            pq.pop();

            pq.push(min(first, second) * 2 + max(first, second));
            ans++;
        }

        return ans;
    }
};
