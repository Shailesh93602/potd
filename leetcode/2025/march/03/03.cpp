class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> ans(n);
        int x = 0, y = n - 1;

        for(int i=0, j=n-1; i<n; i++, j--) {
            if(nums[i] < pivot) ans[x++] = nums[i];
            if(nums[j] > pivot) ans[y--] = nums[j];
        }

        while(x <= y) ans[x++] = pivot;

        return ans;
    }
};
