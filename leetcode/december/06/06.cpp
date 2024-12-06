class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_map<int, int> map;

        for(int i: banned) map[i]++;

        int sum = 0, count = 0;

        for(int i=1; i<=n; i++) {
            if(map.find(i) == map.end()) {
                if(i + sum <= maxSum) {
                    count++;
                    sum += i;
                }
            }
        }

        return count;
    }
};
