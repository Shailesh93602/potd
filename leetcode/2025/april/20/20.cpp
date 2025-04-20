class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int, int> map;

        for(int &i: answers) map[i]++;  

        int ans = 0;
        for(auto &x: map) ans += ceil((double)x.second / (x.first + 1)) * (x.first + 1);
    
        return ans;
   }
};
