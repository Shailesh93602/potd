class Solution {
public:
    long long minimumSteps(string s) {
        long long count = 0;
        int count1 = 0;

        for(char ch: s) {
            if(ch == '0') count += (long long)count1;
            else count1++;
        }

        return count;
    }
};
