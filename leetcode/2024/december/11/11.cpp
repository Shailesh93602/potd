class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        if (nums.size() == 1) return 1;

        int maxVal = 0;

        for (int i: nums) maxVal = max(maxVal, i);

        vector<int> count(maxVal + 1, 0);

        for (int i: nums) {
            count[max(i - k, 0)]++;  

            if (i + k + 1 <= maxVal) count[i + k + 1]--; 
        }

        int sum = 0, ans = 0;

        for (int i: count) {
            sum += i;
            ans = max(ans, sum);
        }

        return ans;
    }
};
