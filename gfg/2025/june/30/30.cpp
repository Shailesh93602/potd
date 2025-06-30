class Solution {
    bool check(vector<int> &arr, int k, int w, int maxH) {
        int n = arr.size();
        vector<int> water(n, 0);
        
        for(int i=0; i<n; i++) {
            if(i > 0) water[i] = water[i - 1];
            
            int currH = arr[i] + water[i];
            
            if(i >= w) currH -= water[i - w];
            
            if(currH < maxH) {
                int add = maxH - currH;
                water[i] += add;
                k -= add;
                
                if(k < 0) return false;
            }
        }
        
        return true;
    }

  public:
    int maxMinHeight(vector<int> &arr, int k, int w) {
        // code here
        int n = arr.size(), i = arr[0];
        
        for(int l=1; l<n; l++) if(arr[l] < i) i = arr[l];
        
        int j = i + k, ans = i;
        
        while(i <= j) {
            int mid = i + (j - i) / 2;
            
            if(check(arr, k, w, mid)) {
                ans = max(ans, mid);
                i = mid + 1;
            } else j = mid - 1;
        }
        
        return ans;
    }
};
