class Solution {
public:
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size(), sum = 0, ans = 0;
        vector<int> arr(n+1);

        for(int i=0; i<n; i++) {
            while(sum + arr[i] < nums[i]) {
                ans++;

                if(ans > queries.size()) return -1;

                int left = queries[ans-1][0], right = queries[ans-1][1];
                int val = queries[ans-1][2];

                if(right >= i) {
                    arr[max(left, i)] += val;
                    arr[right + 1] -= val;
                }
            }

            sum += arr[i];
        }

        return ans;
    }
};
