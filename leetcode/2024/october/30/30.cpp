class Solution {
public:
    int minimumMountainRemovals(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n, 0), right(n, 0), s;
        s.push_back(nums[0]);

        for(int i=1; i<n; i++) {
            int x = lower_bound(s.begin(), s.end(), nums[i]) - s.begin();

            if(x == s.size()) s.push_back(nums[i]);
            else s[x] = nums[i];

            left[i] = i+1-s.size();
        }

        s.clear();
        s.push_back(nums[n-1]);

        for(int i=n-2; i>=0; i--) {
            int x = lower_bound(s.begin(), s.end(), nums[i]) - s.begin();

            if(x == s.size()) s.push_back(nums[i]);
            else s[x] = nums[i];

            right[i] = n-i-s.size();
        }

        int ans = n;
        for(int i=0; i<n; i++)
            if(i+1-left[i] >= 2 && n-i-right[i] >= 2)
                ans = min(ans, left[i]+right[i]);
        

        return ans;
    }
};
