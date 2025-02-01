class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        unordered_map<int, int> map;
        sort(nums.begin(), nums.end());

        for(int i: nums) {
            int root = (int)sqrt(i);

            if(root * root == i && map.find(root) != map.end()) map[i] = map[root] + 1;
            else map[i] = 1;
        }

        int count = 0;
        for(auto& [key, len]: map) count = max(count, len);

        if(count == 1) return-1;

        return count;
    }
};
