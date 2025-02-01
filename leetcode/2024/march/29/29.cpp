class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long int maxVal = *max_element(nums.begin(), nums.end());
        long long int count = 0, left = 0, right = 0, ans = 0;
        while(right < nums.size()) {
            if(nums[right] == maxVal) count++;
            while(count >= k) {
                if(nums[left] == maxVal) count--;
                left++;
                ans += nums.size() - right;
            }
            right++;
        }

        return ans;
    }
};
