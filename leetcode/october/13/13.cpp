class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        vector<pair<int, int>> merged;
        for(int i=0; i<nums.size(); i++) 
            for(int num: nums[i]) 
                merged.push_back({ num, i });
            
        sort(merged.begin(), merged.end());
        
        unordered_map<int, int> map;
        int i = 0, count = 0;
        int start = 0, end = INT_MAX;
        for(int j=0; j<merged.size(); j++) {
            map[merged[j].second]++;
            if(map[merged[j].second] == 1) count++;

            while(count == nums.size()) {
                int currRange = merged[j].first - merged[i].first;
                if(currRange < end - start) {
                    start = merged[i].first;
                    end = merged[j].first;
                }

                map[merged[i].second]--;
                if(map[merged[i].second] == 0) count--;
                i++;
            }
        }

        return { start, end };
    }
};
