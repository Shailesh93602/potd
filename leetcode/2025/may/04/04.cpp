class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        vector<int> num(100);
        int ans = 0;

        for(auto &it: dominoes) {
            int val = it[1] * 10 + it[0];
            if(it[0] < it[1]) val = it[0] * 10 + it[1];

            ans += num[val]++;
        }

        return ans;
    }
};
