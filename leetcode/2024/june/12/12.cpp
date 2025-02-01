class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int, int> map;
        for(int i=0; i<nums.size(); i++) {
            map[nums[i]]++;
        }

        int i=0;
        while(map[0]--) nums[i++] = 0;
        while(map[1]--) nums[i++] = 1;
        while(map[2]--) nums[i++] = 2;
    }
};
