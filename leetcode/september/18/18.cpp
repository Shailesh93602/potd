class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> ans;

        for(int num: nums) ans.push_back(to_string(num));

        sort(ans.begin(), ans.end(), [](string &a, string &b) { return a + b > b + a; });

        if(ans[0] == "0") return "0";

        string res;
        for(string &i: ans) res += i;

        return res;
    }
};
