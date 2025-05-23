class Solution {
public:
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
        long long ans = 0;
        int count = 0, minVal = (1 << 30), maxVal = -1 * (1 << 30);

        for(int i: nums) {
            int val = i ^ k;
            ans += i;
            int change = val - i;

            if(change > 0) {
                minVal = min(minVal, change);
                ans += change;
                count++;
            }
            else maxVal = max(maxVal, change);
        }

        if(count % 2 == 0) return ans;

        return max(ans - minVal, ans += maxVal);
    }
};
