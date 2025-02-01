class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        vector<int> ans(2 * sum + 1, 0);
        ans[nums[0] + sum] = 1;
        ans[-nums[0] + sum] += 1;

        for(int i=1; i<nums.size(); i++) {
            vector<int> temp(2 * sum + 1, 0);

            for(int j=-sum; j<=sum; j++) {
                if(ans[j + sum] > 0) {
                    temp[j + nums[i] + sum] += ans[j + sum];
                    temp[j - nums[i] + sum] += ans[j + sum]; 
                }
            }

            ans = temp;
        }

        if(abs(target) > sum) return 0;

        return ans[target + sum];
    }
};
