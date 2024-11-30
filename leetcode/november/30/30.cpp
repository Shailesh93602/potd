class Solution {
public:
    void solve(int i, unordered_map<int, 
        vector<pair<int, int>>> &map, 
        vector<vector<int>> &pairs, 
        vector<bool> &visited, deque<vector<int>> &dq) {
            
            while(!map[i].empty()) {
                auto [x, y] = map[i].back();
                map[i].pop_back();

                if(!visited[y]) {
                    visited[y] = true;
                    solve(x, map, pairs, visited, dq);
                    dq.push_front(pairs[y]);
                }
            }
        }
        
    vector<vector<int>> validArrangement(vector<vector<int>>& pairs) {
        unordered_map<int, vector<pair<int, int>>> map;
        unordered_map<int, int> left, right;

        for(int i=0; i<pairs.size(); i++) {
            int start = pairs[i][0], end = pairs[i][1];
            map[start].push_back({ end, i });
            left[start]++;
            right[end]++;
        }

        int i = pairs[0][0];
        for(auto x: pairs) {
            if(left[x[0]] > right[x[0]]) {
                i = x[0];
                break;
            }
        }

        deque<vector<int>> dq;
        vector<bool> visited(pairs.size(), false);
        solve(i, map, pairs, visited, dq);

        return vector<vector<int>>(dq.begin(), dq.end());
    }
};
