class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> count(n+1);
        count[0] = 1;
        int ans = 0;
        int temp = 0;
        for(int i: nums) {
            temp += i & 1;
            if(temp - k >= 0) ans += count[temp - k];
            count[temp]++;
        }
        return ans;
    }
};
