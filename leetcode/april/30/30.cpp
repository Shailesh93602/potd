class Solution {
public:
    long long wonderfulSubstrings(string word) {
        unordered_map<int, int> count;
        count[0] = 1;
        long long ans = 0;
        int bitmask = 0;
        
        for(char ch: word) {
            int c = ch - 'a';
            bitmask ^= 1 << c;
            ans += count[bitmask];
            for(int i=0; i<10; i++) {
                ans += count[bitmask ^ (1 << i)];
            }
            count[bitmask]++;
        }
        return ans;
    }
};
