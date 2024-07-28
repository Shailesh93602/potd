class Solution {
public:
    int secondMinimum(int n, vector<vector<int>>& edges, int time, int change) {
        unordered_map<int, list<int>> graph;
        for(auto &edge: edges) {
            int u = edge[0];
            int v = edge[1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>,
            greater<pair<int, int>>> q;
        q.push({0, 1});
        
        vector<int> uniqueVisit(n+1, 0);
        vector<int> dis(n+1, -1);
        
        while(!q.empty()) {
            auto [temp, node] = q.top();
            q.pop();

            if(dis[node] == temp || uniqueVisit[node] >= 2) continue;

            uniqueVisit[node]++;
            dis[node] = temp;

            if(node == n && uniqueVisit[node] == 2) return dis[node];

            if((temp/change)%2 != 0) temp = (temp/change+1)*change;

            for(int neighbour: graph[node]) q.push({temp + time, neighbour});
        } 
        
        return -1;
    }
};
