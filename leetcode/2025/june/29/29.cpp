class Solution {
    const int MOD = 1e9 + 7;
public:
    int numSubseq(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> res(n, 1);

        for(int i=1; i<n; i++) res[i] = (res[i - 1] * 2) % MOD;

        int i = 0, j = n-1, ans = 0;

        while(i <= j) {
            if(nums[i] + nums[j] <= target) {
                ans = (ans + res[j - i]) % MOD;
                i++;
            } else j--;
        }

        return ans;
    }
};
