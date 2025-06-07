class Solution {
  public:
    int longestCommonSum(vector<int> &a1, vector<int> &a2) {
        // Code here.
        int n = a1.size(), ans = 0;
        unordered_map<int, int> map;
        int sum1 = 0, sum2 = 0;
        
        for(int i=0; i<n; i++) {
            sum1 += a1[i];
            sum2 += a2[i];
            
            int curr = sum1 - sum2;
            
            if(curr == 0) ans = max(ans, i + 1);
            else if(map.find(curr) != map.end()) ans = max(ans, i-map[curr]);
            else map[curr] = i;
        }
        
        return ans;
    }
};
