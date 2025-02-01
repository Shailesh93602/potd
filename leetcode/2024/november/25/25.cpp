class Solution {
public:
    int slidingPuzzle(vector<vector<int>>& board) {
        vector<vector<int>> dirs = {
            { 0, 1 },
            { 1, 0 }, 
            { 0, -1 }, 
            { -1, 0 }
        };
        int m = 2, n = 3;
        string target = "123450";
        string start;

        for (vector<int> x: board) for(int i: x) start += '0' + i;
        if(start == target) return 0;
    
        queue<string> q{{ start }};
        unordered_set<string> visited{ start };

        for (int count = 1; !q.empty(); ++count) {
            int len = q.size();
            while (len--) {
                string s = q.front();
                q.pop();
                
                int k = s.find('0');
                int i = k / n;
                int j = k % n;
        
                for (vector<int> dir: dirs) {
                    int x = i + dir[0];
                    int y = j + dir[1];
          
                    if (x < 0 || x == m || y < 0 || y == n) continue;
          
                    int idx = x * n + y;
                    swap(s[k], s[idx]);
          
                    if (s == target) return count;
          
                    if (!visited.contains(s)) {
                        q.push(s);
                        visited.insert(s);
                    }
                
                    swap(s[k], s[idx]);
                }
            }
        }

        return -1;
    }
};
