class Solution {
    int n;
    vector<vector<int>> tree;
    vector<int> ans;
    int solve(vector<int> &amount, int bob, int src, int tar, int x) {
        int maxIncome = 0, maxChild = INT_MIN;

        if(src == bob) ans[src] = 0;
        else ans[src] = n;

        for(int i: tree[src]) {
            if(i != tar) {
                maxChild = max(maxChild, solve(amount, bob, i, src, x + 1));

                ans[src] = min(ans[src], ans[i] + 1);
            }
        }

        if(ans[src] > x) maxIncome += amount[src];
        else if(ans[src] == x) maxIncome += amount[src] / 2;

        if(maxChild == INT_MIN) return maxIncome;

        return maxIncome + maxChild;
    }
public:
    int mostProfitablePath(vector<vector<int>>& edges, int bob, vector<int>& amount) {
        n = amount.size();
        tree.resize(n, vector<int>());
        
        for(auto e: edges) {
            tree[e[0]].push_back(e[1]);
            tree[e[1]].push_back(e[0]);
        }

        ans.resize(n);
        return solve(amount, bob, 0, 0, 0);
    }
};
