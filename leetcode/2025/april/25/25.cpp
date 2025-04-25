class Solution {
public:
    long long countInterestingSubarrays(vector<int>& nums, int modulo, int k) {
        unordered_map<int, int> map;
        long long ans = 0;
        int x = 0;
        map[0] = 1;

        for(int i: nums) {
            x += i % modulo == k;
            ans += map[(x - k + modulo) % modulo];
            map[x % modulo]++;
        }

        return ans;
    }
};
