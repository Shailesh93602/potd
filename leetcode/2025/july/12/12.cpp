class Solution {
    pair<int, int> solve(int n, int x, int y) {
        if (x + y == n + 1)
            return {1, 1};

        if (x > y)
            swap(x, y);

        if (n <= 4)
            return {2, 2};

        int m = (n + 1) / 2;
        int minVal = INT_MAX, maxVal = INT_MIN;

        if (x - 1 > n - y) {
            int t = n + 1 - x;
            x = n + 1 - y;
            y = t;
        }

        if (y * 2 <= n + 1) {
            int a = x - 1;
            int b = y - x - 1;

            for (int i = 0; i <= a; ++i) {
                for (int j = 0; j <= b; ++j) {
                    auto [r1, r2] = solve(m, i + 1, i + j + 2);
                    minVal = min(minVal, r1 + 1);
                    maxVal = max(maxVal, r2 + 1);
                }
            }
        } else {
            int p4 = n + 1 - y;
            int a = x - 1;
            int b = p4 - x - 1;
            int c = y - p4 - 1;

            for (int i = 0; i <= a; ++i) {
                for (int j = 0; j <= b; ++j) {
                    int offset = i + j + 1 + (c + 1) / 2 + 1;
                    auto [r1, r2] = solve(m, i + 1, offset);
                    minVal = min(minVal, r1 + 1);
                    maxVal = max(maxVal, r2 + 1);
                }
            }
        }

        return {minVal, maxVal};
    }

public:
    vector<int> earliestAndLatest(int n, int firstPlayer, int secondPlayer) {
        auto [earliest, latest] = solve(n, firstPlayer, secondPlayer);
        return {earliest, latest};
    }
};
