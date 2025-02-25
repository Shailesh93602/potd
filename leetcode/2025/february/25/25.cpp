class Solution {
    int MOD = 1e9 + 7;
public:
    int numOfSubarrays(vector<int>& arr) {
        int ans = 0, sum = 0, count1 = 0, count2 = 1;

        for(int i: arr) {
            sum += i;

            if(sum%2 == 0) {
                ans += count1;
                count2++;
            }
            else {
                ans += count2;
                count1++;
            }

            ans %= MOD;
        }

        return ans;
    }
};
