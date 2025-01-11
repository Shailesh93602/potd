class Solution {
public:
    bool canConstruct(string s, int k) {
        int n = s.length();
        if(n <= k) return n == k;

        vector<int> freq(26, 0);
        for(char ch: s) freq[ch - 'a']++;

        int count = 0;
        for(int i: freq) if(i%2 != 0) count++;

        return count <= k;
    }
};
