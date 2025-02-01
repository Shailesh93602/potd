class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        int n = s.length();
        unordered_set<string> set(dictionary.begin(), dictionary.end());
        unordered_map<int, int> map;

        function<int(int)> dp = [&](int start) {
            if(start == n) return 0;

            if(map.count(start)) return map[start];

            int ans = dp(start+1) + 1;
            for(int end = start; end < n; end++) {
                auto curr = s.substr(start, end-start+1);
                if(set.count(curr)) ans = min(ans, dp(end+1));
            }

            return map[start] = ans;
        };

        return dp(0);
    }
};
