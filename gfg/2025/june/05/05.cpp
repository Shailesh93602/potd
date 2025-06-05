class Solution {
  public:
    int countPaths(vector<vector<int>>& edges, int V, int src, int dest) {
        // Code here
        vector<vector<int>> adj(V);
        vector<int> inDeg(V, 0);
        
        for(auto e: edges) {
            adj[e[0]].push_back(e[1]);
            inDeg[e[1]]++;
        }
        
        queue<int> q;
        
        for(int i=0; i<V; i++) if(inDeg[i] == 0) q.push(i);
        
        vector<int> ans(V, 0);
        ans[src] = 1;
        
        while(!q.empty()) {
            int i = q.front();
            q.pop();
            
            for(int j: adj[i]) {
                ans[j] += ans[i];
                
                if(--inDeg[j] == 0) q.push(j);
            }
        }
        
        return ans[dest];
    }
};
