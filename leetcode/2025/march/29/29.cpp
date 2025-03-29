class Solution {
    int MOD = 1e9 + 7;

    long long power(long long a, long long b) {
        long long ans = 1;

        while (b > 0) {
            if (b % 2 == 1) ans = ((ans * a) % MOD);

            a = (a * a) % MOD;
            b /= 2;
        }

        return ans;
    }
public:
    int maximumScore(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> scores(n);

        for (int i=0; i<n; i++) {
            int num = nums[i];

            for (int j=2; j<=sqrt(num); j++) {
                if (num % j == 0) {
                    scores[i]++;

                    while (num % j == 0) num /= j;
                }
            }

            if (num >= 2) scores[i]++;
        }

        vector<int> next(n, n), prev(n, -1);

        stack<int> st;

        for (int i=0; i<n; i++) {
            while (!st.empty() &&
                   scores[st.top()] < scores[i]) {
                int j = st.top();
                st.pop();

                next[j] = i;
            }

            if (!st.empty()) prev[i] = st.top();

            st.push(i);
        }

        vector<long long> res(n);
        for (int i=0; i<n; i++)
            res[i] = (long long)(next[i] - i) * (i - prev[i]);
        
        priority_queue<pair<int, int>> pq;

        for (int i=0; i<n; i++) pq.push({ nums[i], i });

        long long ans = 1;

        while (k > 0) {
            auto [num, i] = pq.top();
            pq.pop();

            long long x = min((long long)k, res[i]);

            ans = (ans * power(num, x)) % MOD;

            k -= x;
        }

        return ans;
    }
};
