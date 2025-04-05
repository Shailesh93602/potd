class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int ans = 0;
        
        for(int i: nums) ans |= i;

        return ans << (nums.size() - 1);
    }
};
