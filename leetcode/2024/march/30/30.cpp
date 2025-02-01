class Solution {
public:
    int solve(vector<int>& nums, int k) {
         int n = nums.size();
        unordered_map<int, int> map;
        int left = 0;
        int right = 0;
        int count = 0;
        while(right < n) {
            map[nums[right++]]++;

            while(left < right and map.size() > k) {
                if(--map[nums[left]] == 0) map.erase(nums[left]);
                left++;
            }

            count += right-left;
        }

        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return solve(nums, k)-solve(nums, k-1);
        // will work fine but takes longer time so will fail in some test cases
        // for(int i=0; i<n; i++) {
        //     unordered_map<int, int> map;
        //     for(int j=i; j<n; j++) {
        //         map[nums[j]]++;
        //         if(map.size() != k) continue;
        //         count++;
        //     }
        // }
        // return count;
    }
};