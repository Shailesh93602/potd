class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.length();
        vector<int> ans(n, 0);

        for(vector<int> x: shifts) {
            int idx = x[1] + 1;
            if(x[2] == 1) {
                ans[x[0]]++;
                
                if(idx < n) ans[idx]--;
            }
            else {
                ans[x[0]]--;

                if(idx < n) ans[idx]++;
            }
        }

        string res(n, ' ');
        int count = 0;

        for(int i=0; i<n; i++) {
            count = (count + ans[i]) % 26;
            
            if(count < 0) count += 26;

            res[i] = 'a' + (s[i] - 'a' + count) % 26;
        }

        return res;
    }
};
