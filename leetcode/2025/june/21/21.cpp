class Solution {
public:
    int minimumDeletions(string word, int k) {
        unordered_map<char, int> map;

        for(auto &ch: word) map[ch]++;

        int ans = word.size();
        for(auto &[_, a]: map) {
            int count = 0;

            for(auto &[_, b]: map) {
                if(a > b) count += b;
                else if(b > a + k) count += b - (a + k);
            }

            ans = min(ans, count);
        }

        return ans;
    }
};
