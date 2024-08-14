class Solution {
public:
    int countPairs(int x, vector<int> &nums) {
        int n = nums.size();
        int count = 0;
        int i=0;

        for(int j=1; j<n; j++) {
            while(j > i && nums[j]-nums[i] > x) i++;
            count += j-i;
        }
        return count;
    }
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int maxVal = nums.back();

        int i=0;
        int j=maxVal;
        while(i < j) {
            int mid = (i+j)/2;

            if(countPairs(mid, nums) < k) i = mid+1;
            else j = mid;
        }
        return i;
    }
};
