class Solution {
public:
    int size;
    unordered_map<char, vector<int>> map;
    int clockwise(int curr, int next) {
        if(next >= curr) return next - curr;
        return size - (curr - next);
    }
    int antiClockwise(int curr, int next) {
        if(curr >= next) return curr - next;
        return size - (next - curr);
    }
    int solve(string &key, int idx, int pos, vector<vector<int>> &dp) {
        if(idx == key.size()) return 0;
        if(dp[idx][pos] != -1) return dp[idx][pos];

        int steps = INT_MAX;
        int keyVal = key[idx];

        for(int i=0; i<map[keyVal].size(); i++) {
            int next = map[keyVal][i];
            int taken = solve(key, idx+1, next, dp);

            steps = min(steps, 1+clockwise(pos, next) + taken);
            steps = min(steps, 1+antiClockwise(pos, next) + taken);
        }
        dp[idx][pos] = steps;
        return steps;
    }
    int findRotateSteps(string ring, string key) {
        size = ring.size();
        
        for(int i=0; i<size; i++) {
            map[ring[i]].push_back(i);
        }

        vector<vector<int>> dp(key.size(), vector<int>(ring.size(), -1));

        return solve(key,0,0,dp);
    }
};
