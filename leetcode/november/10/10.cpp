class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> counts(32, 0);
        int i=0, orVal=0, minLen=INT_MAX;

        for(int j=0; j<n; j++) {
            orVal |= nums[j];

            for(int k=0; k<32; k++) if(nums[j] & (1 << k)) counts[k]++;
            
            while(i <= j && orVal >= k) {
                minLen = min(minLen, j - i + 1);
                int temp = 0;

                for(int k=0; k<32; k++) {
                    if(nums[i] & (1 << k)) counts[k]--;
                    if(counts[k] > 0) temp |= (1 << k);
                }

                orVal = temp;
                i++;
            }
        }

        if(minLen == INT_MAX) return -1;
        return minLen;
    }
};
