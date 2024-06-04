class Solution {
public:
    int longestPalindrome(string s) {
        int odd = 0;
        unordered_map<char, int> freq;

        for(char ch: s) {
            freq[ch]++;
            if(freq[ch]%2 == 1) odd++;
            else odd--;
        }

        if(odd > 1) return s.length() - odd+1;
        return s.length();
    }
};
