class Solution {
  public:
    int minimumCoins(vector<int>& arr, int k) {
        // code here
        sort(arr.begin(), arr.end());
        int n = arr.size(), ans = INT_MAX, prev = 0;
        
        vector<int> pre(n, 0);
        pre[0] = arr[0];
        
        for(int i=1; i<n; i++) pre[i] = pre[i - 1] + arr[i];
        
        for(int i=0; i<n; i++) {
            if(i > 0 && arr[i] == arr[i - 1]) continue;
            if(i > 0) prev = pre[i - 1];
            
            int j = upper_bound(arr.begin() + i, arr.end(), arr[i] + k) - arr.begin();
            int total = prev + pre[n - 1] - pre[j - 1] - (n - j) * (arr[i] + k);
            
            ans = min(ans, total);
        }

        return ans;
    }
};
