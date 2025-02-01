class Solution {
public:
    bool solve(int node, int destination, unordered_map<int, vector<int>>&graph, unordered_set<int> &visited) {
        if(node == destination) return true;
        visited.insert(node);

        for(int n: graph[node]) {
            if(visited.find(n) == visited.end()) {
                if(solve(n, destination, graph, visited)) return true;
            }
        }

        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int, vector<int>> graph;
        for(auto e: edges) {
            int u = e[0];
            int v = e[1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        unordered_set<int> visited;
        return solve(source, destination, graph, visited);
    }
};
