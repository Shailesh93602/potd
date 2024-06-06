class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        if(n < groupSize || n%groupSize != 0) return false;

        unordered_map<int, int> map;
        for(int i=0; i<n; i++) map[hand[i]]++;

        sort(hand.begin(), hand.end());
        for(int i=0; i<n; i++) {
            if(map[hand[i]] == 0) continue;

            bool flag = true;
            for(int j=0; j<groupSize; j++) {
                if(map[hand[i]+j] <= 0) {
                    flag = false;
                    break;
                }
                else map[hand[i]+j]--;
            }
            if(!flag) return false;
        }
        return true;
    }
};
