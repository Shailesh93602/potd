class Solution {
public:
    int k, ans;
    vector<vector<int>> res;
    vector<int> values;
    vector<long long> sum;
    
    void solve(int u, int p) {
        sum[u] = values[u];

        for(int v: res[u]) {
            if(v == p) continue;

            solve(v, u);
            sum[u] += sum[v];
        }

        if(sum[u]%k == 0) {
            ans++;
            sum[u] = 0;
        }
    }
    int maxKDivisibleComponents(int n, vector<vector<int>>& edges, vector<int>& values, int k) {
        res.resize(n);
        sum.resize(n);

        for(auto &e: edges) {
            res[e[0]].push_back(e[1]);
            res[e[1]].push_back(e[0]);
        }
        this->values = values;
        this->k = k;
        
        ans = 0;
        
        solve(0, -1);
        
        return ans;
    }
};
