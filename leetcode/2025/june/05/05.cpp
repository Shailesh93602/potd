class Solution {
    char solve(unordered_map<char, vector<char>> &adj, char curr, vector<int> &vis) {
        vis[curr - 'a'] = 1;
        char ans = curr;

        for(char ch: adj[curr]) 
            if(vis[ch - 'a'] == 0) 
                ans = min(ans, solve(adj, ch, vis));
        
        return ans;
    }
public:
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        int n = s1.length();
        unordered_map<char, vector<char>> adj;

        for(int i=0; i<n; i++) {
            char u = s1[i], v = s2[i];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        string ans;
        for(char ch: baseStr) {
            vector<int> vis(26, 0);
            char res = solve(adj, ch, vis);
            ans.push_back(res);
        }

        return ans;
    }
};
