class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0, i = 0, j = 0;

        for(int x: nums) {
            ans = max(ans, j * x);
            j = max(j, i - x);
            if(x > i) i = x;
        }

        return ans;
    }
};
