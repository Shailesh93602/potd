class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n =  bloomDay.size();
        int j = 1e9+1;
        int i = 0;
        int ans = -1;
        while(i < j){
            int mid = (i+j)/2;
            int c = 0;
            int w = 0;
            int h = 0;
            for(int i=0; i<n; i++){
               if(bloomDay[i] <= mid) c++;
               else c = 0;
               if(c == k){
                   h++;
                   c = 0;
               }           
            }
            if(h >= m){
                ans = mid;
                j = mid;
            }
            else i = mid+1;
        }
        return ans;
    }
};
