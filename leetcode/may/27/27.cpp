class Solution {
public:
    int specialArray(vector<int>& nums) {
        int count = 0;
        int maxEle = nums[0];
        for(int i=1; i<nums.size(); i++) maxEle = max(maxEle, nums[i]);

        for(int i=0; i<=maxEle; i++) {
            int count = 0;
            for(int j=0; j<nums.size(); j++) {
                if(i <= nums[j]) count++;
            }
            if(count == i) return count;
        }

        return -1;
    }
};
