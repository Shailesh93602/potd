class Solution {
public: 
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        map<int, int> map;
        int n = difficulty.size();
        for(int i=0; i<n; i++) {
            if(map.find(difficulty[i]) == map.end())
                map[difficulty[i]] = profit[i];
            else {
                map[difficulty[i]] = max(map[difficulty[i]], profit[i]);
            }
        }
        sort(difficulty.begin(), difficulty.end());
        int maxVal = 0;
        for(auto i: map){
            maxVal = max(maxVal, i.second);
            map[i.first] = maxVal;
        }
        int ans = 0;
        for(int i: worker) {
            int k = lower_bound(difficulty.begin(), difficulty.end(), i) -                   difficulty.begin();
            if(difficulty[k]>i or k==n) k--;
            if(k>=0 and k<n) ans += map[difficulty[k]];
        }
        return ans;
    }
};
