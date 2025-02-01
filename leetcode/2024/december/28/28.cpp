class Solution {
public:
    vector<int> maxSumOfThreeSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int m = n - k + 1;
        vector<int> ans(m, 0);
        int sum = 0;

        for(int i=0; i<n; i++) {
            sum += nums[i];

            if(i >= k-1) {
                ans[i - k + 1] = sum;
                sum -= nums[i - k + 1];
            }
        }

        vector<int> left(m, 0);
        int leftMaxIdx = 0;

        for(int i=0; i<m; i++) {
            if(ans[i] > ans[leftMaxIdx]) leftMaxIdx = i;

            left[i] = leftMaxIdx;
        }

        vector<int> right(m, 0);
        int rightMaxIdx = m - 1;

        for(int i=m-1; i>=0; i--) {
            if(ans[i] >= ans[rightMaxIdx]) rightMaxIdx = i;

            right[i] = rightMaxIdx;
        }

        int maxSum = 0;
        vector<int> res(3);

        for(int i=k; i<m - k; i++) {
            int l = left[i-k], r = right[i + k];
            int totalSum = ans[l] + ans[i] + ans[r];

            if(totalSum > maxSum) {
                maxSum = totalSum;
                res = { l, i, r };
            }
        }

        return res;
    }
};
