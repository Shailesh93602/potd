class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> ans;

        for(int i: arr1) {
            while(!ans.count(i) && i > 0) {
                ans.insert(i);
                i /= 10;
            }
        }

        int count = 0;
        for(int i: arr2) {
            while(!ans.count(i) && i > 0) {
                i /= 10;
            }
            if(i > 0) count = max(count, static_cast<int>(log10(i)+1));
        }

        return count;
    }
};
