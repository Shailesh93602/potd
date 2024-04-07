class Solution {
public:
    bool checkValidString(string s) {
        int leftCount = 0;
        int rightCount = 0;

        for(char c: s) {
            if(c == '(') {
                leftCount++;
                rightCount++;
            } 
            else if(c == ')') {
                leftCount--;
                rightCount--;
            }
            else {
                leftCount--;
                rightCount++;
            }
            if(rightCount < 0) return false;
            if(leftCount < 0) leftCount = 0;
        }

        return leftCount == 0;
    }
};
