class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int n = nums.size(), ans = 0;
        unordered_map<int, int> map;

        for(int i=0; i<n; i++) 
            for(int j=i+1; j<n; j++) 
                map[nums[i] * nums[j]]++;

        for(auto [val, freq]: map) 
            ans += 8 * (freq - 1) * freq / 2;
        
        return ans;
    }
};
