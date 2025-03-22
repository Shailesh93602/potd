class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);

        for(auto edge: edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
       }

        vector<bool> visited(n, false);
        int ans = 0;

        for(int i=0; i<n; i++) {
            if(!visited[i]) {
                vector<int> res;
                queue<int> q;
                q.push(i);
                visited[i] = true;

                while(!q.empty()) {
                    int curr = q.front();
                    q.pop();
                    res.push_back(curr);

                    for(int x: adj[curr]) {
                        if(!visited[x]) {
                            q.push(x);
                            visited[x] = true;
                        }
                    }
                }

                bool isCompleted = true;
                for(int i: res) {
                    if(adj[i].size() != res.size() - 1) {
                        isCompleted = false;
                        break;
                    }
                }

                if(isCompleted) ans++;
            }
        }

        return   ans;
    }
};
