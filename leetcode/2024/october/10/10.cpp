class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n = nums.size();
        vector<int> rightMax(n);
        rightMax[n-1] = nums[n-1];

        for(int i=n-2; i>=0; i--) 
            rightMax[i] = max(rightMax[i+1], nums[i]);
        
        int i=0;
        int ans = 0;

        for(int j=0; j<n; j++) {
            while(i < j && nums[i] > rightMax[j]) i++;
            ans = max(ans, j-i);
        }

        return ans;
    }
};
