class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long ans = 0;

        while(k--) {
            int maxVal = gifts[0], maxI = 0;

            for(int i=1; i<gifts.size(); i++) {
                if(gifts[i] > maxVal) {
                    maxVal = gifts[i];
                    maxI = i;
                }
            }

            gifts[maxI] = sqrt(maxVal);
        }

        for(int i: gifts) ans += i;

        return ans;
    }
};
