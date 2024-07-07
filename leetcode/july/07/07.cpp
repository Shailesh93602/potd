class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int empty = 0;
        int count = 0;
        while(numBottles) {
            count += numBottles;
            empty += numBottles;
            numBottles = empty/numExchange;
            empty = empty % numExchange;
        }
        return count;
    }
};
