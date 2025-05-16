class Solution {
    bool check(string &s1, string &s2) {
        int n = s1.length(), m = s2.length();
        if(n != m) return false;

        int diff = 0;

        for(int i=0; i<n; i++) {
            diff += s1[i] != s2[i];

            if(diff > 1) return false;
        }

        return diff == 1;
    }
public:
    vector<string> getWordsInLongestSubsequence(vector<string>& words, vector<int>& groups) {
        int n = groups.size(), maxI = 0;
        vector<int> dp(n, 1), prev(n, -1);

        for(int i=1; i<n; i++) {
            for(int j=0; j<i; j++) {
                if(check(words[i], words[j]) == 1 && dp[j] + 1 > dp[i] && groups[i] != groups[j]) {
                    dp[i] = dp[j] + 1;
                    prev[i] = j;
                }
            }

            if(dp[i] > dp[maxI]) maxI = i;
        }

        vector<string> ans;
        
        for(int i=maxI; i>=0; i=prev[i]) ans.emplace_back(words[i]);

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
