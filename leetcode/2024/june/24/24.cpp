class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int ans = 0;
        int count = 0;
        for(int i=0; i<nums.size(); i++) {
            if((nums[i] + count)%2 == 0) {
                if(i > nums.size() - k) return -1;
                else {
                    ans++;
                    count++;
                    nums[i] = -1;
                }
            }
            if(i+1 >= k) count -= (nums[i-k+1] < 0);
        }
        return ans;
    }
};
