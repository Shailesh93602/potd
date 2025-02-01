class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        vector<pair<int, string>> map(n);
        for(int i=0; i<n; i++) map[i] = { heights[i], names[i]};
        sort(map.begin(), map.end(), greater<>());
        for(int i=0; i<n; i++) names[i] = map[i].second;

        return names;
    }
};
