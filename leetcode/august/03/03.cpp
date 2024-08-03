class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        vector<int> arr1(1001);
        vector<int> arr2(1001);

        for(int v: target) arr1[v]++;
        for(int v: arr) arr2[v]++;

        return arr1 == arr2;
    }
};
