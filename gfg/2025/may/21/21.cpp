class Solution {
    int findCount(int val, int m, int n) {
        int count = 0;
        
        for(int i=1; i<=m; i++) count += min(val / i, n);
        
        return count;
    }
  public:
    int kthSmallest(int m, int n, int k) {
        // code here
        int i = 1, j = n * m;
        
        while(i < j) {
            int mid = (i + j) / 2;
            
            if(findCount(mid, m, n) < k) i = mid + 1;
            else j = mid;
        }
        
        return i;
    }
};
