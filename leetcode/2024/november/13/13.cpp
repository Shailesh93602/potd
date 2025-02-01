class Solution {
public:
    long long solve(vector<int> &nums, int val) {
        int i=0, j=nums.size()-1;
        long long ans = 0;

        while(i < j) {
            int sum = nums[i] + nums[j];

            if(sum < val) {
                ans += (j - i);
                i++;
            }
            else j--;
        }

        return ans;
    }
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(), nums.end());
        return solve(nums, upper+1) - solve(nums, lower);
    }
};
