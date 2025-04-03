class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0, i = 0, j = 0;
        
        for(int k=0; k<n; k++) {
            ans = max(ans, j * nums[k]);
            j = max(j, i - nums[k]);
            if(i < nums[k]) i = nums[k];
        }

        return ans;
    }
};
