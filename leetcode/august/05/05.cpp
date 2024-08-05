class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> map;

        for(string s: arr) map[s]++;

        for(auto s: arr) {
            if(map[s] == 1) {
                k--;
                if(!k) return s;
            }
        }
        return "";
    }
};
