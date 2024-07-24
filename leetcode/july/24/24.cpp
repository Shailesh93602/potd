class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        int n = nums.size();
        vector<pair<int, int>> map(n);
        
        for(int i=0; i<n; i++) {
            int num = nums[i];
            int temp = 0;
            if(num == 0) temp = mapping[0];

            int val = 1;
            while(num > 0) {
                int digit = num%10;
                temp += val * mapping[digit];
                num /= 10;
                val *= 10;
            }
            map[i] = {temp, i};
        }

        sort(map.begin(), map.end());
        vector<int> ans;
        
        for(auto pair: map) ans.push_back(nums[pair.second]);
        
        return ans;
    }
};
