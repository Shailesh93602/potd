class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long ans = 0, sum = 0;
        int i=0, j=0;
        unordered_map<int, int> map;

        while(j < nums.size()) {
            int curr = nums[j];
            int idx = -1;
            if(map.count(curr)) idx = map[curr];

            while(i <= idx || j-i+1 > k) sum -= nums[i++];
            
            map[curr] = j;
            sum += nums[j];

            if(j-i+1 == k) ans = max(ans, sum);
            j++;
        }

        return ans;
    }
};
