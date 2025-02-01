class Solution {
public:
    vector<int> solve(string &goal) {
        int n = goal.length();
        vector<int> ans(n, 0);
        int j = 0, i = 1;

        while(i < n) {
            if(goal[i] == goal[j]) {
                j++;
                ans[i++] = j;
            }
            else if(j > 0) j = ans[j-1];
            else ans[i++] = 0;
        }

        return ans;
    }
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length()) return false;

        s += s;
        vector<int> lps = solve(goal);
        int i = 0, j = 0;
        int n = s.length(), m = goal.length();

        while(i < n) {
            if(s[i] == goal[j]) {
                i++;
                j++;
                if(j == m) return true;
            }
            else if(j > 0 ) j = lps[j - 1];
            else i++;
        }

        return false;
    }
};
