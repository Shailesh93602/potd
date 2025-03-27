class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int x = nums[0], count = 0, n = nums.size();

        for(int i: nums) {
            if(i == x) count++;
            else count--;

            if(count == 0) {
                x = i;
                count = 1;
            }
        }

        int xCount = 0;
        count = 0;

        for(int i: nums) if(i == x) xCount++;

        for(int i=0; i<n; i++) {
            if(nums[i] == x) count++;

            int rem = xCount - count;

            if(count * 2 > i + 1 && rem * 2 > n - i - 1) return i;
        }

        return -1;
    }
};
