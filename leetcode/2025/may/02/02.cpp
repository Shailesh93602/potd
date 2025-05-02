class Solution {
public:
    string pushDominoes(string dominoes) {
        int n = dominoes.length();
        vector<int> forces;
        int ans = 0;

        for(char ch: dominoes) {
            if(ch == 'R') ans = n;
            else if(ch == 'L') ans = 0;
            else ans = max(ans - 1, 0);

            forces.push_back(ans);
        }

        ans = 0;
        for(int i=n-1; i>=0; i--) {
            char ch = dominoes[i];
            if(ch == 'L') ans = n;
            else if(ch == 'R') ans = 0;
            else ans = max(ans - 1, 0);

            forces[i] -= ans;
        }

        string res = "";
        for(int i: forces) {
            if(i > 0) res.push_back('R');
            else if(i < 0) res.push_back('L');
            else res.push_back('.');
        }

        return res;
    }
};
