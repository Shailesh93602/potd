class Solution {
    const int MOD = 1e9 + 7;
    void solve(string &curr, int i, vector<string> &ans, int n) {
        if(i == n) {
            ans.push_back(curr);
            return;
        }

        for(char ch = 'a'; ch <= 'c'; ch++) {
            if(i != 0 && curr.back() == ch) continue;

            curr.push_back(ch);
            solve(curr, i + 1, ans, n);
            curr.pop_back();
        }
    }
public:
    int colorTheGrid(int m, int n) {
        int type = 3 * pow(2, m-1);
        vector<string> possible;
        string temp = "";
        solve(temp, 0, possible, m);
        vector<vector<bool>> valid(type, vector<bool>(type, true));

        for(int i=0; i<type; i++) 
            for(int j=0; j<type; j++) 
                for(int k=0; k<m; k++) 
                    if(possible[i][k] == possible[j][k]) 
                        valid[i][j] = false;

        vector<vector<int>> res(n, vector<int>(type, 0));
        for(int i=0; i<type; i++) res[0][i] = 1;
        for(int i=1; i<n; i++) 
            for(int j=0; j<type; j++)
                for(int k=0; k<type; k++)
                    if(valid[j][k]) 
                        res[i][k] = (res[i][k] + res[i-1][j]) % MOD;

        int ans = 0;
        for(int i: res[n-1]) ans = (ans + i) % MOD;

        return ans;
    }
};
