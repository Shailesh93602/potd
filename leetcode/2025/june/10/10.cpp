class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> map;

        for(char ch: s) map[ch]++;

        int maxVal = 1, minVal = s.length();
        for(auto it: map) {
            if(it.second % 2 == 1) maxVal = max(maxVal, it.second);
            else minVal = min(minVal, it.second);
        }

        return maxVal - minVal;
    }
};
