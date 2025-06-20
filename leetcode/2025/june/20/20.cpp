class Solution {
    int solve(int t1, int t2, int t) {
        return abs(t1 - t2) + t * 2;
    }
public:
    int maxDistance(string st, int k) {
        int ans = 0, n = 0, s = 0, e = 0, w = 0;

        for(char ch: st) {
            switch(ch) {
                case 'N':
                    n++;
                    break;
                case 'S':
                    s++;
                    break;
                case 'E':
                    e++;
                    break;
                case 'W':
                    w++;
                    break;
            }

            int t1 = min({ n, s, k });
            int t2 = min({ e, w, k - t1 });

            ans = max(ans, solve(n, s, t1) + solve(e, w, t2));
        }

        return ans;
    }
};
