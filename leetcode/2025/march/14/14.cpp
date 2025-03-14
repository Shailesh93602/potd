class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int i = 1, j = candies[0], ans = 0;
        for(int x: candies) j = max(j, x);

        while(i <= j) {
            long long mid = i + (j - i) / 2, count = 0;

            for(int x: candies) count += (x / mid);

            if(count >= k) {
                ans = mid;
                i = mid + 1;
            }
            else j = mid - 1;
        }

        return ans;
    }
};
