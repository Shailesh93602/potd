class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int count = 0, maxVal = 0;

        for(int i=0; i<arr.size(); i++) {
            maxVal = max(maxVal, arr[i]);

            if(maxVal == i) count++;
        }

        return count;
    }
};
