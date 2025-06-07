class Solution {
public:
    string clearStars(string s) {
        int n = s.length();
        priority_queue<char, vector<char>, greater<char>> pq;
        unordered_map<char, vector<int>> map;
        vector<bool> visited(n, true);

        for(int i=0; i<n; i++) {
            if(s[i] == '*') {
                char temp = pq.top();
                pq.pop();

                int last = map[temp].back();
                map[temp].pop_back();
                visited[i] = false;
                visited[last] = false;
            } else {
                pq.push(s[i]);
                map[s[i]].push_back(i);
            }
        }

        string ans = "";
        for(int i=0; i<n; i++) 
            if(visited[i]) 
                ans += s[i];
        
        return ans;
    }
};
