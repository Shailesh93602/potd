class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;

        for(string s: words) if(s.find(pref) == 0) count++;

        return count;
    }
};
