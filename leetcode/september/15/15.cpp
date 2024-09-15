class Solution {
public:
    int findTheLongestSubstring(string s) {
        int prefixXor = 0;
        vector<int> map(26, 0);
        map['a' - 'a'] = 1;
        map['e' - 'a'] = 2;
        map['i' - 'a'] = 4;
        map['o' - 'a'] = 8;
        map['u' - 'a'] = 16;

        vector<int> freq(32, -1);
        int count = 0;

        for(int i=0; i<s.length(); i++) {
            prefixXor ^= map[s[i] - 'a'];
            if(freq[prefixXor] == -1 and prefixXor != 0) 
                freq[prefixXor] = i;
            count = max(count, i-freq[prefixXor]);
        }

        return count;
    }
};
