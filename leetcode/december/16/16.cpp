class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while(k--) {
            int minVal = nums[0], minIdx = 0;

            for(int i=1; i<nums.size(); i++) {
                if(nums[i] < minVal) {
                    minVal = nums[i];
                    minIdx = i;
                }
            }

            nums[minIdx] = minVal * multiplier;
        }
        
        return nums;
    }
};
