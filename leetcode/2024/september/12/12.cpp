class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;
        unordered_map<char, int> map;
        for(char c: allowed) map[c]++;
        
        for(string s: words) {
            bool flag = true;
            for(char c: s) {
                if(map.find(c) == map.end()) {
                    flag = false;
                    break;
                }
            }
            if(flag) count++;
        }
        return count;
    }
};
