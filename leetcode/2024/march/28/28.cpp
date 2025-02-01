class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        int n = nums.size();
        int left = 0;
        int right = 0;
        int count = 0;
        while(right < n) {
            int curr = nums[right++];
            map[curr]++;
            while(left < right && map[curr] > k) {
                map[nums[left++]]--;
            }
            count = max(count, right-left);
        }
        return count;
    }
};
