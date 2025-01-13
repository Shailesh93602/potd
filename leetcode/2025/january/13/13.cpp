class Solution {
public:
    int minimumLength(string s) {
        vector<int> freq(26, 0);
        int ans = 0;

        for(char ch: s) freq[ch - 'a']++;

        for(int i: freq) {
            if(i == 0) continue;
            if(i%2 == 0) ans += 2;
            else ans++;
        }

        return ans;
    }
};
