class Solution {
    bool check(vector<int> &arr, int mid, int k) {
        int ans = 0;
        
        for(int i=0; i<arr.size(); i++) {
            ans += arr[i] / mid;
            
            if(arr[i] % mid != 0) ans++;
        }
        
        return ans <= k;
    }
  public:
    int kokoEat(vector<int>& arr, int k) {
        // Code here
        int i = 1, j = *max_element(arr.begin(), arr.end());
        int ans = j;
        
        while(i <= j) {
            int mid = i + (j - i) / 2;
            
            if(check(arr, mid, k)) {
                ans = mid;
                j = mid - 1;
            } else i = mid + 1;
        }
        
        return ans;
    }
};
