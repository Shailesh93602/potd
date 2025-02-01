class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        int n = nums.size();
        vector<int> freq(201, 0);

        for(int num: nums) freq[num+100]++;

        sort(nums.begin(), nums.end(), [&](int x, int y) {
            return freq[x+100] == freq[y+100] ? x>y:freq[x+100]<freq[y+100];
        });

        return nums;
    }
};
