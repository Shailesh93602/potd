class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n = nums.size();
        vector<pair<int, int>> map;

        for(int i=0; i<n; i++) map.emplace_back(i, nums[i]);

        sort(map.begin(), map.end(), [&](auto x1, auto x2) {
            return x1.second > x2.second;
        });
        sort(map.begin(), map.begin() + k);
        vector<int> ans;

        for(int i=0; i<k; i++) ans.push_back(map[i].second);

        return ans;
    }
};
