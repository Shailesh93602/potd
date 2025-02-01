class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        int n = nums.size();

        vector<long long> ans(n+1, 0);

        for(int i=1; i<=n; i++) ans[i] = ans[i-1] + nums[i-1];

        deque<int> dq;
        int minVal = INT_MAX;

        for(int i=0; i<=n; i++) {
            while(!dq.empty() && ans[i] - ans[dq.front()] >= k) {
                    minVal = min(minVal, i-dq.front());
                    dq.pop_front();
            }

            while(!dq.empty() && ans[i] <= ans[dq.back()]) dq.pop_back();

            dq.push_back(i);
        }

        if(minVal == INT_MAX) return -1;

        return minVal;
    }
};
