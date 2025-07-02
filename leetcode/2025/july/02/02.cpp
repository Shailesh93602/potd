class Solution {
    const int MOD = 1e9 + 7;
public:
    int possibleStringCount(string word, int k) {
        if(word.empty()) return 0;

        vector<int> res;
        int count = 1, n = word.length();

        for(int i=1; i<n; i++) {
            if(word[i] == word[i - 1]) count++;
            else {
                res.push_back(count);
                count = 1;
            }
        }

        res.push_back(count);

        long count1 = 1, count2 = 0;
        for(int i: res) count1 = (count1 * i) % MOD;

        if(k <= res.size()) return count1;

        vector<int> ans(k, 0);
        ans[0] = 1;

        for(int i: res) {
            vector<int> temp(k, 0);
            long sum = 0;

            for(int j=0; j<k; j++) {
                if(j > 0) sum = (sum + ans[j - 1]) % MOD;
                if(j > i) sum = (sum - ans[j - i - 1] + MOD) % MOD;
                temp[j] = sum;
            }

            ans = temp;
        }

        for(int i=res.size(); i<k; i++) count2 = (count2 + ans[i]) % MOD;

        return (count1 - count2 + MOD) % MOD;
    }
};
