class Solution {
    bool solve(int node, vector<vector<int>> &graph, vector<bool> &isVisited, vector<bool> &ans) {
        if(ans[node]) return true;
        if(isVisited[node]) return false;

        isVisited[node] = true;
        ans[node] = true;

        for(auto x: graph[node]) 
            if(solve(x, graph, isVisited, ans)) 
                return true;

        ans[node] = false;
        return false;
    }
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<bool> isVisited(n), ans(n);

        for(int i=0; i<n; i++) solve(i, graph, isVisited, ans);

        vector<int> res;
        for(int i=0; i<n; i++) if(!ans[i]) res.push_back(i);

        return res;
    }
};
