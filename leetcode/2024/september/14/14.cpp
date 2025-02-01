class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxVal = 0;
        int ans = 0;
        int count = 0;

        for(int i: nums) {
            if(maxVal < i) {
                maxVal = i;
                ans = 0;
                count = 0;
            }

            if(maxVal == i) count++;
            else count = 0;

            ans = max(ans, count);
        }

        return ans;
    }
};
