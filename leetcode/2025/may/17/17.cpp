class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0, j = nums.size() - 1, k = 0;

        while(k <= j) {
            switch(nums[k]) {
                case 0:
                    swap(nums[i++], nums[k++]);
                    break;
                case 1:
                    k++;
                    break;
                case 2:
                    swap(nums[k], nums[j--]);
                    break;
            }
        }
    }
};
