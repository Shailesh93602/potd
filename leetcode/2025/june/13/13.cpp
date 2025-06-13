class Solution {
    int solve(vector<int> &nums, int x) {
        int i = 0, ans = 0, n = nums.size();

        while(i < n - 1) {
            if(nums[i + 1] - nums[i] <= x) {
                ans++;
                i++;
            }

            i++;
        }

        return ans;
    }
public:
    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int i = 0, j = nums[n - 1] - nums[0];

        while(i < j) {
            int mid = i + (j - i) / 2;

            if(solve(nums, mid) >= p) j = mid;
            else i = mid + 1;
        }

        return i;
    }
};
