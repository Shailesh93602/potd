class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> ans(n);
        int j = 0;

        for(int i=0; i<n; i++) {
            j = max(i, j);

            while(j < n-1 && nums[j]%2 != nums[j+1]%2) j++;

            ans[i] = j;
        }

        vector<bool> res;

        for(vector<int> q: queries) res.push_back(q[1] <= ans[q[0]]);
        
        return res;
    }
};
