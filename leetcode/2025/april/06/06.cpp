class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size(), maxVal = 0;
        vector<int> ans;

        if (n == 0)
            return ans;

        sort(nums.begin(), nums.end());
        vector<int> res(n, 1), prev(n, -1);

        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (nums[i] % nums[j] == 0 && res[j] + 1 > res[i]) {
                    res[i] = res[j] + 1;
                    prev[i] = j;
                }
            }

            if (res[i] > res[maxVal])
                maxVal = i;
        }

        while (maxVal >= 0) {
            ans.push_back(nums[maxVal]);
            maxVal = prev[maxVal];
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
