class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        map<int, int> map;
        for(int i=0; i<n; i++) {
            map[score[i]] = i;
        }
        int i=0;
        vector<string> ans(n);
        for(auto it=map.rbegin(); it!=map.rend(); it++) {
            if(i == 0) ans[it->second] = "Gold Medal";
            else if(i == 1) ans[it->second] = "Silver Medal";
            else if(i == 2) ans[it->second] = "Bronze Medal";
            else ans[it->second] = to_string(i+1);
            i++;
        }
        return ans;
    }
};
