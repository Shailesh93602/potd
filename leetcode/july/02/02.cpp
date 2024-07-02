class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> freq;
        int n = nums1.size();

        for(int i: nums1) freq[i]++;
        vector<int> ans;
        for(int i: nums2) if(freq[i]-- > 0) ans.push_back(i);

        return ans;
    }
};
