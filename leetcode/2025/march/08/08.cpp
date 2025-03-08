class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int i = 0, count = 0, ans = INT_MAX;

        for(int j = 0; j < blocks.size(); j++) {
            if(blocks[j] == 'W') count++;

            if(j - i + 1 == k) {
                ans = min(ans, count);

                if(blocks[i++] == 'W') count--;
            }
        }

        return ans;
    }
};
