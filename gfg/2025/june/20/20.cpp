class Solution {
  public:
    bool validgroup(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        map<int, int> map;
        
        for(int i: arr) map[i]++;
        
        for(auto it: map) {
            int val = it.first, freq = it.second;
            
            if(freq == 0) continue;
            
            for(int i=1; i<k; i++) {
                int next = val + i;
                
                if(map[next] < freq) return false;
                
                map[next] -= freq;
            }
        }
        
        return true;
    }
};
