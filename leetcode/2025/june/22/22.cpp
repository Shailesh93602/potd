class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        int n = s.length(), i = 0;

        while(i < n) {
            ans.push_back(s.substr(i, k));
            i += k;
        }

        ans.back() += string(k - ans.back().length(), fill);
        return ans;
    }
};
