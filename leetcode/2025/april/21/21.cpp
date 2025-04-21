class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        int i=0, j=0, curr = 0;

        for(int x: differences) {
            curr += x;
            i = min(i, curr);
            j = max(j, curr);

            if(j - i > upper - lower) return 0;
        }

        return (upper - lower) - (j - i) + 1;
    }
};
