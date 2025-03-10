class Solution {
    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    long long solve(string s, int k) {
        long ans = 0;
        int i = 0, j = 0, count = 0;
        unordered_map<char, int> map;

        while(j < s.length()) {
            char ch = s[j];

            if(isVowel(ch)) map[ch]++;
            else count++;

            while(map.size() == 5 && count >= k) {
                ans += s.length() - j;
                char start = s[i];

                if(isVowel(start)) {
                    if(--map[start] == 0) map.erase(start);
                }
                else count--;

                i++;
            }

            j++;
        }

        return ans;
    }
public:
    long long countOfSubstrings(string word, int k) {
        return solve(word, k) - solve(word, k + 1);
    }
};
