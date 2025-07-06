class FindSumPairs {
    vector<int> nums1, nums2;
    unordered_map<int, int> map;
public:
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        this->nums1 = nums1;
        this->nums2 = nums2;

        for(int i: nums2) map[i]++;
    }
    
    void add(int i, int val) {
        map[nums2[i]]--;
        nums2[i] += val;
        map[nums2[i]]++;
    }
    
    int count(int tot) {
        int ans = 0;

        for(int i: nums1) {
            int res = tot - i;

            if(map.count(res)) ans += map[res];
        }

        return ans;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */
