class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans = 0, i = -1, minVal = -1, maxVal = -1;

        for(int j=0; j<nums.size(); j++) {
            if(nums[j] < minK || nums[j] > maxK) i = j;
            if(nums[j] == maxK) maxVal = j;
            if(nums[j] == minK) minVal = j;
            ans += max(0LL, min(minVal, maxVal) - i);
        }

        return ans;
    }
};
