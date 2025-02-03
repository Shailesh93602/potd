class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int count1 = 1, count2 = 1, ans = 1;

        for(int i=0; i<nums.size()-1; i++) {
            if(nums[i+1] > nums[i]) {
                count1++;
                count2 = 1;
            }
            else if(nums[i+1] < nums[i]) {
                count1 = 1;
                count2++;
            }
            else count1 = count2 = 1;

            ans = max(ans, max(count1, count2));
        }

        return ans;
    }
};
