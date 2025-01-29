class Solution {
    vector<int> ans;
    int find(int i) {
        if(ans[i] == i) return i;

        return ans[i] = find(ans[i]);
    }
    void uni(int i, int j) {
        i = ans[i];
        j = ans[j];

        ans[i] = j;
    }
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        ans.resize(n + 1);

        for(int i=1; i<=n; i++) ans[i] = i;
        for(auto e: edges) {
            find(e[0]);
            find(e[1]);

            if(ans[e[0]] == ans[e[1]]) return e;
            uni(e[0], e[1]);
        }

        return { -1, -1 };
    }
};
