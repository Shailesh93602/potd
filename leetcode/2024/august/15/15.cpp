class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int counta = 0;
        int countb = 0;
        for(int i: bills) {
            if(i == 5) counta++;
            else if(i == 10) {
                if(counta > 0) {
                    counta--;
                    countb++;
                }
                else return 0;
            }
            else if(i == 20) {
                if(countb > 0 && counta > 0) {
                    countb--;
                    counta--;
                }
                else if(counta > 2) counta -= 3;
                else return 0;
            }
        }
        
        return 1;
    }
};
