class Solution {
public:
    int maximumSum(vector<int>& nums) {
        int ans = -1;
        unordered_map<int, int> map;

        for(int i: nums) {
            int sum = 0;

            for(int j=i; j; j/=10) sum += j%10;
            
            if(map[sum] > 0) ans = max(ans, map[sum] + i);

            map[sum] = max(map[sum], i);
        }

        return ans;
    }
};
