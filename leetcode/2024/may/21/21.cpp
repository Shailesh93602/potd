class Solution {
public:
    void solve(vector<int> &nums, int start, vector<int> &temp, vector<vector<int>> &ans) {
        if(nums.size() == start) {
            ans.push_back(temp);
            return;
        }
        solve(nums, start+1, temp, ans);
        temp.push_back(nums[start]);
        solve(nums, start+1, temp, ans);
        temp.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(nums, 0, temp, ans);
        return ans;
    }
};
