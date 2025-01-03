class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long leftSum = 0, rightSum = 0;
        int count = 0, n = nums.size();

        for(int i: nums) rightSum += i;
¯
        for(int i=0; i<n-1; i++) ¯
            leftSum += nums[i];
            rightSum -= nums[i];

            if(leftSum >= rightSum) count++;
        }

        return count;
    }
};
