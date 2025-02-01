class Solution {
    const int MOD = 1000000007;
public:
    int numWays(vector<string>& words, string target) {
        int n = words[0].size(), m = target.size();

        vector<vector<int>> freq(n, vector<int>(26, 0));

        for(string word: words) 
            for(int i=0; i<n; i++) 
                freq[i][word[i] - 'a']++;
        
        vector<long> temp(m+1, 0), ans(m+1, 0);
        temp[0] = ans[0] = 1;

        for(int i=1; i<=n; i++) {
            for(int j=1; j<=m; j++) {
                int idx = target[j-1] - 'a';
                ans[j] += (freq[i-1][idx] * temp[j-1]) % MOD;
                ans[j] %= MOD;
            }

            temp = ans;
        }
        
        return ans[m];    
    }
};
