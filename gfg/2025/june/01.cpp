class Solution {
  public:
    int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int x) {
        // code here
        int count = 0, n = mat1.size(), m = mat2.size();
        int i=0, j=0, k=m-1, l=m-1;
        
        while(i < n && j < n && k >= 0 && l >= 0) {
            int sum = mat1[i][j] + mat2[k][l];
            
            if(sum == x) {
                j++;
                l--;
                count++;
            } 
            else if(sum > x) l--;
            else j++;
            
            if(j >= n) {
                i++;
                j = 0;
            }
            if(l < 0) {
                l = m-1;
                k--;
            }
        }
        
        return count;
    }
};
