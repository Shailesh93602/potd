class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long int count = 0;
        int temp = -1;
        int left = -1;
        int right = -1;

        for(int i=0; i<nums.size(); i++) {
            if(!(minK <= nums[i] && nums[i] <= maxK)) temp = i;
            
            if(nums[i] == minK) left = i;

            if(nums[i] == maxK) right = i;

            count += max(0, min(left, right) - temp);
        }

        return count;
    }
};
