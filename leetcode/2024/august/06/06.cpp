class Solution {
public:
    int minimumPushes(string word) {
        vector<int> count(26);

        for(char ch: word) count[ch - 'a']++;

        sort(count.rbegin(), count.rend());

        int ans = 0;
        for(int i=0; i<26; i++) ans += (i/8+1)*count[i];

        return ans;
    }
};
