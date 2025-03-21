class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
        unordered_set<string> available(supplies.begin(), supplies.end());
        int n = recipes.size();
        unordered_map<string, int> recipeIndex;
        for (int i = 0; i < n; i++) {
            recipeIndex[recipes[i]] = i;
        }
        
        unordered_map<string, vector<int>> graph;
        vector<int> indegree(n, 0);
        for (int i = 0; i < n; i++) {
            for (const auto &ing : ingredients[i]) {
                if (!available.count(ing)) { 
                    graph[ing].push_back(i);
                    indegree[i]++;
                }
            }
        }
        
        queue<int> q;
        for (int i = 0; i < n; i++) if (indegree[i] == 0) q.push(i);
        
        vector<string> ans;
        while (!q.empty()) {
            int cur = q.front();
            q.pop();
            string recipe = recipes[cur];
            ans.push_back(recipe);
            available.insert(recipe);
            
            if (graph.find(recipe) != graph.end()) {
                for (int dep : graph[recipe]) {
                    indegree[dep]--;
                    if (indegree[dep] == 0) {
                        q.push(dep);
                    }
                }
            }
        }
        
        return ans;
    }
};
