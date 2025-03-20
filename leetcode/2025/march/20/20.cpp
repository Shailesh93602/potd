class Solution {
    int solve(int i, vector<vector<pair<int, int>>> &adj, vector<bool> &visited, vector<int> &res, int id) {
        int currCost = INT_MAX;
        res[i] = id;
        visited[i] = true;

        for(auto x: adj[i]) {
            currCost &= x.second;

            if(!visited[x.first]) 
                currCost &= solve(x.first, adj, visited, res, id);
        }

        return currCost;
    }
public:
    vector<int> minimumCost(int n, vector<vector<int>>& edges, vector<vector<int>>& query) {
        vector<vector<pair<int, int>>> adj(n);

        for(auto edge: edges) {
            adj[edge[0]].push_back({ edge[1], edge[2] });
            adj[edge[1]].push_back({ edge[0], edge[2] });
        }

        vector<bool> visited(n, false);
        vector<int> res(n), resCost, ans;
        int id = 0;

        for(int i=0; i<n; i++) {
            if(!visited[i]) {
                resCost.push_back(solve(i, adj, visited, res, id++ ));
            }
        }

        for(auto q: query) {
            int i = q[0], j = q[1];

            if(res[i] == res[j]) ans.push_back(resCost[res[i]]);
            else ans.push_back(-1);
        }

        return ans;
    }
};
