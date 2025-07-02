class Solution {
  public:
    int totalElements(vector<int> &arr) {
        // code here
        map<int, int> mp;
        int i = 0, j = 0, n = arr.size(), ans = 0;
        
        while(j < n) {
            mp[arr[j]]++;
            
            while(mp.size() > 2) {
                mp[arr[i]]--;
                
                if(mp[arr[i]] == 0) mp.erase(arr[i]);
                
                i++;
            }
            
            ans = max(ans, j++ - i + 1);
        }
        
        return ans;
    }
};
