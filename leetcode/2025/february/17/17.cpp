class Solution {
    int solve(unordered_map<char, int> &map) {
        int ans = 0;

        for(auto it=map.begin(); it!=map.end(); it++) {
            if(it->second == 0) continue;

            ans++;
            it->second--;
            ans += solve(map);
            it->second++;
        }

        return ans;
    }
public:
    int numTilePossibilities(string tiles) {
        unordered_map<char, int> map;

        for(char ch: tiles) map[ch]++;

        return solve(map);
    }
};
