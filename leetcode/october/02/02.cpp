class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int, int> map;
        vector<int> temp(arr);
        sort(temp.begin(), temp.end());
        int rank = 1;
        for(int i=0; i<temp.size(); i++) {
            if(i > 0 && temp[i] > temp[i-1]) rank++;
            map[temp[i]] = rank;
        }

        for(int &i: arr) i = map[i];

        return arr;
    }
};
