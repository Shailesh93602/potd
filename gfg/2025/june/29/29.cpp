class Solution {
    bool check(int mid, vector<int> &arr, int k) {
        int n = arr.size(), ans = 0, sum = 0;
        
        for(int i: arr) {
            if(i > mid) return false;
            
            sum += i;
            
            if(sum > mid) {
                ans++;
                sum = i;
            }
        }
        
        return ans < k;
    }
  public:
    int splitArray(vector<int>& arr, int k) {
        // code here
        int n = arr.size(), maxVal = *max_element(arr.begin(), arr.end());
        int i = maxVal, j = 0;
        
        for(int x: arr) j += x;
        
        int ans = 0;
        while(i <= j) {
            int mid = (i + j) / 2;
            
            if(check(mid, arr, k)) {
                ans = mid;
                j = mid - 1;
            } else i = mid + 1;
        }
        
        return ans;
    }
};
