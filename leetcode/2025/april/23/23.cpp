class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int, int> map;
        int maxVal = 0;

        for(int i=1; i<=n; i++) {
            int j = 0, k = i;

            while(k) {
                j += k % 10;
                k /= 10;
            }

            maxVal = max(maxVal, ++map[j]);
        }

        int ans = 0;
        for(auto x: map) if(x.second == maxVal) ans++;

        return ans;
    }
};
