class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n = skill.size();
        int total = 0;
        unordered_map<int, int> map;

        for(int i: skill) {
            total += i;
            map[i]++;
        }

        if(total%(n/2) != 0) return -1;

        int target = total/(n/2);
        long long ans = 0;

        for(auto& [currSkill, currFreq]: map) {
            int temp = target - currSkill;

            if(map.find(temp) == map.end() || currFreq != map[temp])    
                return -1;

            ans += (long long) currSkill 
                * (long long)temp 
                * (long long)currFreq;
        }

        return ans/2;
    }
};
