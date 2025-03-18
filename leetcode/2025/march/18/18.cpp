class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int count = 0, i = 0, ans = 0;

        for(int j=0; j<nums.size(); j++) {
            while((count & nums[j]) != 0) {
                count ^= nums[i++];
            }

            count |= nums[j];
            ans = max(ans, j - i + 1);
        }

        return ans;
    }
};
