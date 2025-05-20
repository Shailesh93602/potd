class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> ans(n + 1, 0);
        
        for(auto q: queries) {
            int i = q[0], j = q[1];

            ans[i]++;
            ans[j + 1]--;
        }

        vector<int> counts;
        int curr = 0;

        for(int i: ans) {
            curr += i;
            counts.push_back(curr);
        }
        for(int i=0; i<n; i++) if(counts[i] < nums[i]) return false;

        return true;
    }
};
