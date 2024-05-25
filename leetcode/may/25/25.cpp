class Solution {
public:
    vector<string> ans;
    void solve(int i, string &temp, string &s, unordered_map<string, bool> &map) {
        if(i >= s.length()) {
            ans.push_back(temp);
            return;
        }

        for(int j=i+1; j<=i+10 && j<=s.length(); j++) {
            string word = s.substr(i, j-i);
            if(map.find(word) != map.end()) {
                if(temp.size() == 0) temp = word;
                else temp += " " + word;

                solve(j, temp, s, map);
                int x = 0;
                while(x < word.length()) {
                    x++;
                    temp.pop_back();
                }

                if(temp.size() > 0) {
                    temp.pop_back();
                }
            }
        }
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        string temp = "";
        unordered_map<string, bool> map;
        for(auto x: wordDict) map[x] = true;

        solve(0, temp, s, map);
        return ans;
    }
};
