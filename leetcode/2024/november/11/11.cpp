class Solution {
public:
    bool primeSubOperation(vector<int>& nums) {
        int maxEle = *max_element(nums.begin(), nums.end());
        vector<int> ans(maxEle+1, 1);
        ans[1] = 0;

        for(int i=2; i<=sqrt(maxEle+1); i++) 
            if(ans[i] == 1) 
                for(int j=i*i; j<=maxEle; j+=i) 
                    ans[j] = 0;

        int curr = 1;
        int i = 0;

        while(i < nums.size()) {
            int diff = nums[i] - curr;

            if(diff < 0) return 0;
            if(ans[diff] == 1 || diff == 0) {
                i++;
                curr++;
            }
            else curr++;
        }

        return 1;
    }
};
