class Solution {
public:
    int minCapability(vector<int>& nums, int k) {
        int i = 1, j = *max_element(nums.begin(), nums.end()), total = nums.size();

        while(i < j) {
            int mid = (i + j) / 2, poss = 0;

            for(int k=0; k<total; k++) {
                if(nums[k] <= mid) {
                    poss++;
                    k++;
                }
            }

            if(poss >= k) j = mid;
            else i = mid + 1;
        }

        return i;
    }
};
