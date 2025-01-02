class Solution {
    bool isVowel(char ch) {
        return (ch == 'a' || ch == 'e' || ch == 'i' || 
                ch == 'o' || ch == 'u');
    }
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = queries.size();
        vector<int> res;
        int sum = 0;

        for(string s: words) {
            if(isVowel(s[0]) && isVowel(s[s.length() - 1])) sum++;

            res.push_back(sum);
        }

        vector<int> ans;

        for(vector<int> q: queries) {
            if(q[0] == 0) ans.push_back(res[q[1]]);
            else ans.push_back(res[q[1]] - res[q[0] - 1]);
        }

        return ans;
    }
};
