class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int ans = 0, count = 0;
        unordered_map<string, int> map;

        for(auto &s1: words) {
            string s2 = "";
            s2.push_back(s1[1]);
            s2.push_back(s1[0]);

            if(map[s2]) {
                map[s2]--;
                ans += 4;

                if(s1[0] == s1[1]) count--;
            } else {
                map[s1]++;

                if(s1[0] == s1[1]) count++;
            }
        }

        if(count > 0) ans += 2;

        return ans;
    }
};
