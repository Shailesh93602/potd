class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int xor1 = 0, xor2 = 0;
        int n = nums1.size(), m = nums2.size();

        if(m%2 != 0) for(int i: nums1) xor1 ^= i;
        if(n%2 != 0) for(int i: nums2) xor2 ^= i;

        return xor1 ^ xor2;
    }
};
