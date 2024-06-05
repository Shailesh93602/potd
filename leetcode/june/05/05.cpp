class Solution {
public:
    vector<int> count(const string& s) {
        vector<int> freq(26, 0);
        for(char c: s) freq[c-'a']++;
        return freq;
    }

    vector<int> intersection(const vector<int> &a, const vector<int> &b) {
        vector<int> t(26, 0);
        for(int i=0; i<26; i++) t[i] = min(a[i], b[i]);

        return t;
    }
    vector<string> commonChars(vector<string>& words) {
        vector<int> last = count(words[0]);
        
        for(int i=1; i<words.size(); i++) 
            last = intersection(last, count(words[i]));

            vector<string> ans;
            for(int i=0; i<26; i++) {
                while(last [i] > 0) {
                    ans.push_back(string(1, 'a' + i));
                    last[i]--;
                }
            }

            return ans;
    }
};
