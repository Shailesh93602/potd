class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_set<int> s;

        for(int i: nums) {
            if(s.count(i)) s.erase(i);
            else s.insert(i);
        }

        return s.empty();
    }
};
