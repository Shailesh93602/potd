class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        unordered_map<int, int> map;
        for(int i=0; i<arr1.size(); i++) {
            map[arr1[i]]++;
        }

        for(int i=0; i<arr2.size(); i++) {
            if(map.find(arr2[i]) != map.end()) {
                while(map[arr2[i]]--) {
                    ans.push_back(arr2[i]);
                }
            }
         }

        vector<int> temp;
        for(auto it=map.begin(); it!=map.end(); it++) {
            while(it->second-- > 0) temp.push_back(it->first);
        }
        sort(temp.begin(), temp.end());
        for(auto i: temp) ans.push_back(i);
        return ans;
    }
};
