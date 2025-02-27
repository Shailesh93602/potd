class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        int n = arr.size(), ans = 0;
        vector<vector<int>> res(n, vector<int>(n, 0));

        for(int k=2; k<n; k++) {
            int i = 0, j = k-1;

            while(i < j) {
                int sum = arr[i] + arr[j];

                if(sum > arr[k]) j--;
                else if(sum < arr[k]) i++;
                else {
                    res[j][k] = res[i++][j] + 1;
                    ans = max(res[j--][k], ans);
                }
            }
        }

        if(ans == 0) return 0;

        return ans + 2;
    }
};
