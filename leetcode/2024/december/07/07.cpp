class Solution {
public:
    bool check(int num, vector<int> &nums, int k) {
        int count = 0;

        for(int i: nums) {
            int temp = ceil(i / (double)num) - 1;
            count += temp;

            if(count > k) return false;
        }

        return true;
    }
    int minimumSize(vector<int>& nums, int maxOperations) {
        // Binary search bounds
        int left = 1, right = 0;
        
        for(int i: nums) right = max(right, i);
        
        while(left < right) {
            int mid = (left + right) / 2;
            
            if(check(mid, nums, maxOperations)) right = mid;
            else left = mid+1;
        }
        
        return left;
    }
};
