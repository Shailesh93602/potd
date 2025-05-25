class Solution {
  public:
    bool pythagoreanTriplet(vector<int>& arr) {
        // code here
        unordered_map<int, int> map;
        
        for(int i: arr) map[i]++;
        
        for(auto it1: map) {
            for(auto it2: map) {
                int i = it1.first, j = it2.first;
                
                int k = sqrt(i * i + j * j);
                
                if((i * i + j * j) != k * k) continue;
                
                if(map.find(k) != map.end()) return true;
            }
        }
        
        return false;
    }
};
