class Solution {
    long solve(const vector<int> &a, const vector<int> &b, long m) {
        long ans = 0;
        int j = b.size() - 1;

        for(const long i: a) {
            while(j >= 0 && i * b[j] > m) j--;
            ans += j + 1;
        }

        return ans;
    }
    void seperate(const vector<int> &a, vector<int> &a1, vector<int> &a2) {
        for(int i: a) {
            if(i < 0) a1.push_back(-i);
            else a2.push_back(i);
        }

        reverse(a1.begin(), a1.end());
    }
public:
    long long kthSmallestProduct(vector<int>& nums1, vector<int>& nums2, long long k) {
        vector<vector<int>> ans(4);

        seperate(nums1, ans[0], ans[1]);
        seperate(nums2, ans[2], ans[3]);

        long count = ans[0].size() * ans[3].size() + ans[1].size() * ans[2].size();
        int sign = 1;

        if(k > count) k -= count;
        else {
            k = count - k + 1;
            sign = -1;
            swap(ans[2], ans[3]);
        }

        long i = 0, j = 1e10;

        while(i < j) {
            const long m = (i + j) / 2;

            if(solve(ans[0], ans[2], m) + solve(ans[1], ans[3], m) >= k) j = m;
            else i = m + 1;
        }

        return sign * i;
    }
};
