class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<int> res(n, 0);
        
        for(auto edge: edges) res[edge[1]]++;

        int ans = -1, count = 0;

        for(int i=0; i<n; i++) {
            if(res[i] == 0) {
                count++;
                ans = i;
            }
        }
        
        if(count > 1) return -1;

        return ans;
    }
};
