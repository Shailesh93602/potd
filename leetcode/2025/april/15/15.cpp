struct BIT {
    vector<int> tree;

    BIT(int n) : tree(n + 1, 0) {}

    void update(int i, int delta) {
        for (++i; i < tree.size(); i += i & -i)
            tree[i] += delta;
    }

    int query(int i) {
        int ans = 0;
        for (++i; i > 0; i -= i & -i)
            ans += tree[i];
        return ans;
    }
};

class Solution {
public:
    long long goodTriplets(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        unordered_map<int, int> map;

        for (int i=0; i<n; i++) map[nums1[i]] = i;

        BIT bit(n);
        long long ans = 0;

        for (int i=0; i<n; i++) {
            int j = map[nums2[i]];
            int x = bit.query(j - 1);
            int y = (n - j - 1) - (i - x);
            
            ans += (long long)x * y;

            bit.update(j, 1);
        }

        return ans;
    }
};
