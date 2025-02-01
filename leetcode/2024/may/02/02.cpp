class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i=0;
        int j=nums.size()-1;
        while(i < j) {
            if(nums[i] == -nums[j]) return nums[j];
            if(abs(nums[i]) > nums[j]) i++;
            else j--;
        }
        return -1;
    }
};
