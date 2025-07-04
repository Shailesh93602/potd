class Solution {
  public:
    int countAtMostK(vector<int> &arr, int k) {
        // code here
        int n = arr.size(), ans = 0, i = 0, j = 0;
        unordered_map<int, int> map;
        
        while(j < n) {
            map[arr[j]]++;
            
            if(map[arr[j]] == 1) k--;
            
            while(k < 0) {
                map[arr[i]]--;
                
                if(map[arr[i]] == 0) k++;
                
                i++;
            }
            
            ans += (j - i + 1);
            j++;
        }
        
        return ans;
    }
};
