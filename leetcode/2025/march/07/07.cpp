class Solution {
    bool isPrime(int n) {
        if(n == 1) return false;

        for(int i=2; i<=sqrt(n); i++) if(n%i == 0) return false;

        return true;
    }
public:
    vector<int> closestPrimes(int left, int right) {
        vector<int> ans;

        for(int i=left; i<=right; i++) {
            if(i%2 == 0 && i > 2) continue;
            if(isPrime(i)) {
                if(!ans.empty() && i <= ans.back() + 2) {
                    return { ans.back(), i };
                }

                ans.push_back(i);
            }
        }

        if(ans.size() < 2) return { -1, -1 };

        vector<int> res = { -1, -1 };
        int minDiff = 1e6;

        for(int i=1; i<ans.size(); i++) {
            int diff = ans[i] - ans[i-1];

            if(diff < minDiff) {
                minDiff = diff;
                res = { ans[i-1], ans[i] };
            }
        }

        return res;
    }
};
