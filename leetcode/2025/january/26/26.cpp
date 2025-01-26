class Solution {
public:
    int maximumInvitations(vector<int>& favorites) {
        int n = favorites.size();
        vector<int> res(n, 0), chainLens(n, 0);
        vector<bool> visited(n, false);

        for (int fav : favorites) {
            res[fav]++;
        }

        queue<int> q;
        for (int i = 0; i < n; ++i) {
            if (res[i] == 0) {
                q.push(i);
            }
        }

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            visited[node] = true;

            int next = favorites[node];
            chainLens[next] = chainLens[node] + 1;
            if (--res[next] == 0) {
                q.push(next);
            }
        }

        int maxVal = 0, ans = 0;
        for (int i = 0; i < n; ++i) {
            if (!visited[i]) {
                int curr = i, len = 0;
                while (!visited[curr]) {
                    visited[curr] = true;
                    curr = favorites[curr];
                    len++;
                }

                if (len == 2) {
                    ans += 2 + chainLens[i] + chainLens[favorites[i]];
                } else {
                    maxVal = max(maxVal, len);
                }
            }
        }

        return max(maxVal, ans);
    }
};
