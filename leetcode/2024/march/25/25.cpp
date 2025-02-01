class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int> map;
        int n = nums.size();
        vector<int> ans;
        for(int i=0; i<n; i++) {
            if(map.find(nums[i]) != map.end()) ans.push_back(nums[i]);
            map[nums[i]]++;
        }
        return ans;
    }
};
