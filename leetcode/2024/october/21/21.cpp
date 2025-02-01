class Solution {
public:
    void backtrack(const string &s, int i, unordered_set<string> &seen, int count, int &ans) {
        if(count + (s.size() - i) <= ans) return;

        if(i == s.size()) {
            ans = max(ans, count);
            return;
        }

        for(int j=i+1; j<=s.size(); j++) {
            string substring = s.substr(i, j-i);

            if(seen.find(substring) == seen.end()) {
                seen.insert(substring);
                backtrack(s, j, seen, count+1, ans);
                seen.erase(substring);
            }
        }
    }
    int maxUniqueSplit(string s) {
        unordered_set<string> seen;
        int ans = 0;
        backtrack(s, 0, seen, 0, ans);
        
        return ans;
    }
};
