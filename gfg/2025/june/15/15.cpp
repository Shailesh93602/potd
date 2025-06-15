class Solution {
  public:
    int smallestDivisor(vector<int>& arr, int k) {
        // Code here
        int i = 1, j = *max_element(arr.begin(), arr.end());
        int ans = -1;
        
        while(i <= j) {
            int mid = i + (j - i) / 2, sum = 0;
            
            for(int x: arr) sum += (x + mid - 1) / mid;
            
            if(sum <= k) {
                ans = mid;
                j = mid - 1; 
            } else i = mid + 1;
        }
        
        return ans;
    }
};
