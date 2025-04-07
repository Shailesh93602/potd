class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int total = 0;
        
        for(int i: nums) total += i;

        if(total%2 != 0) return false;

        int target = total / 2;
        vector<bool> ans(target + 1, false);
        ans[0] = true;

        for(int i: nums) {
            for(int j = target; j >= i; j--) {
                ans[j] = ans[j] | ans[j - i];

                if(ans[target]) return true;
            }
        }

        return ans[target];
    }
};
