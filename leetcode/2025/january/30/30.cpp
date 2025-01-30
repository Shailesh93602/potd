class Solution {
public:
    int magnificentSets(int n, vector<vector<int>>& edges) {
        vector<vector<int>> res(n);

        for (auto e : edges) {
            res[e[0] - 1].push_back(e[1] - 1);
            res[e[1] - 1].push_back(e[0] - 1);
        }

        vector<int> ans(n);
        for (int i=0; i<n; i++) {
            queue<int> q{{ i }};
            vector<int> temp(n);
            temp[i] = 1;
            int maxVal = 1, rootNode = i;
            
            while (!q.empty()) {
                int curr = q.front();
                q.pop();
                rootNode = min(rootNode, curr);

                for (int x: res[curr]) {
                    if (temp[x] == 0) {
                        temp[x] = temp[curr] + 1;
                        maxVal = max(maxVal, temp[x]);
                        q.push(x);
                    } else if (abs(temp[x] - temp[curr]) != 1) {
                        return -1;
                    }
                }
            }
            ans[rootNode] = max(ans[rootNode], maxVal);
        }

        return accumulate(ans.begin(), ans.end(), 0);
    }
};
