class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxVal = nums[0], n = nums.size();
        vector<int> res;
        long long ans = 0;

        for(int i=1; i<n; i++) maxVal = max(maxVal, nums[i]);

        for(int i=0; i<n; i++) {
            if(nums[i] == maxVal) res.push_back(i);

            int m = res.size();
            if(m >= k) ans += res[m - k] + 1;
        }

        return ans;
    }
};
