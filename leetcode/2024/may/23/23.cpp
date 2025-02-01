class Solution {
public:
    int ans;
    unordered_map<int, int> map;
    void solve(int pos, int n, vector<int> &tmp, vector<int>& nums, int k) {
        if (pos == n) {
            ans++;
            return;
        }
        if (map[nums[pos] - k] == 0) {
            map[nums[pos]]++;
            solve(pos + 1, n, tmp, nums, k);
            map[nums[pos]]--;
        }   
        solve(pos + 1, n, tmp, nums, k);   
    }
    int beautifulSubsets(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        ans = 0;
        vector<int> tmp;
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            map[nums[i]]++;
            solve(i+1, n, tmp, nums, k);
            map[nums[i]]--;
        }
        return ans;
    }
};
