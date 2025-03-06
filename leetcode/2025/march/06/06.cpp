class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int missing = -1, repeat = -1;
        unordered_map<int, int> map;

        for(vector<int> x: grid) for(int i: x) map[i]++;
        
        for(int i=1; i<=n*n; i++) {
            if(!map.count(i)) missing = i;
            else if(map[i] == 2) repeat = i;
        }

        return { repeat, missing };
    }
};
