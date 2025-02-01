class Solution {
public:
    long long findScore(vector<int>& nums) {
        vector<pair<int, int>> res;

        for(int i=0; i<nums.size(); i++) 
            res.push_back({ nums[i], i });

        sort(res.begin(), res.end());
        map<int, int> map;
        long long ans = 0;
        
        for(auto pair: res) {
            if(map.find(pair.second) == map.end()) {
                map[pair.second]++;
                ans += pair.first;
                map[pair.second-1] = 1;
                map[pair.second+1] = 1;
            }
        }
        
        return ans;
    }
};
