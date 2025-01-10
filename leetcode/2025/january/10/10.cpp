class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int> freq(26, 0);

        for(string s: words2) {
            vector<int> temp(26, 0);

            for(char ch: s) temp[ch - 'a']++;
            for(int i=0; i<26; i++) freq[i] = max(freq[i], temp[i]);
        }

        vector<string> ans;

        for(string s: words1) {
            vector<int> temp(26, 0);

            for(char ch: s) temp[ch - 'a']++;

            bool flag = true;
            for(int i=0; i<26; i++) {
                if(freq[i] > temp[i]) {
                    flag = false;
                    break;
                }
            }

            if(flag) ans.emplace_back(s);
        }

        return ans;
    }
};
