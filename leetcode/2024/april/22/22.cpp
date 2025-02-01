class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        if(target == "0000") return 0;
        unordered_set<string> visited(begin(deadends), end(deadends));
        if(visited.count("0000")) return -1;
        
        queue<string> q(deque<string> {"0000"});
        string main, cur, prev;

        for(int size = 1, level = 1; !q.empty(); size = q.size(), level++)
        {
            while(size--) 
            {
                main = cur = prev = q.front(); q.pop();
                for(int i=0; i<4; i++)
                {
                    cur[i] += (cur[i] == '9'? -9 : 1);
                    if(cur == target) return level;
                    if(!visited.count(cur)) q.push(cur), visited.insert(cur);

                    prev[i] -= (prev[i] == '0'? -9 : 1);
                    if(prev == target) return level;
                    if(!visited.count(prev)) q.push(prev), visited.insert(prev);

                    cur = prev = main;
                }
            }
        }

        return -1;
    }
};
