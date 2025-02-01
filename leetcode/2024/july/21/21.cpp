class Solution {
public:
    vector<int> solve(vector<int> adj[],int k){
        queue<int> q;
        vector<int> inorder(k+1),ans;
        for(int i=1;i<=k;i++)
            for(auto ele : adj[i]) inorder[ele]++;
        
        for(int i=1;i<=k;i++) if(!inorder[i]) q.push(i);
        
        while(q.size()){
            auto ele = q.front(); q.pop();
            for(auto e : adj[ele]){
                if(--inorder[e] == 0) q.push(e);
            }
            ans.push_back(ele);
        }
        
        return ans;
    }
    vector<vector<int>> buildMatrix(int k, vector<vector<int>>& r, vector<vector<int>>& c) {
        vector<int> adj1[k+1];
        vector<int> adj2[k+1];
        
        for(auto &vec: r) adj1[vec[0]].push_back(vec[1]);
        for(auto &vec: c) adj2[vec[0]].push_back(vec[1]);
        
        auto topo1 = solve(adj1, k);
        auto topo2 = solve(adj2, k);
        
        if(topo1.size() != k or topo2.size() != k) return {};
        
        vector<vector<int>> ans(k, vector<int> (k));
        
        vector<int> idx(k+1, 0);

        for(int j=0; j<topo2.size(); j++) idx[topo2[j]] = j;

        for(int i=0; i<k; i++) ans[i][idx[topo1[i]]] = topo1[i];

        return ans;
    }
};
