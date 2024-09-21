class Solution {
public:
    void solve(int i, int n, vector<int> &ans) {
        if(i > n) return;
        ans.push_back(i);

        for(int j=0; j<=9; j++) {
            int x = i*10 + j;
            if(x <= n) solve(x, n, ans);
            else break;
        }
    }
    vector<int> lexicalOrder(int n) {
        vector<int> ans;

        for(int i=1; i<=9; i++) solve(i, n, ans);
        
        return ans;
    }
};
