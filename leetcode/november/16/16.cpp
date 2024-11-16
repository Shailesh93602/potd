class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int> ans;
        int n = nums.size();
        int i=0, j=k-1;

        while(j < n) {
            bool flag = false;
        
            for(int k=i; k<j; k++) {
                if(nums[k]+1 != nums[k+1]) {
                    flag = true;
                    break;
                }
            }
        
            if(flag) ans.push_back(-1);
            else ans.push_back(nums[j]);

            i++;
            j++;
        }
        return ans;
    }
};
