class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int counta = 0;
        int countb = 0;
        int lesser = min(x, y);
        int ans = 0;

        for(char c: s) {
            if(c > 'b') {
                ans += min(counta, countb) * lesser;
                counta = 0;
                countb = 0;
            }
            else if(c == 'a') {
                if(x<y && countb>0) {
                    countb--;
                    ans += y;
                }
                else counta++;
            } 
            else {
                if(x>y && counta>0) {
                    counta--;
                    ans += x;
                } 
                else countb++;
            }
        }
        
        ans += min(counta, countb) * lesser;
        
        return ans;
    }
};
