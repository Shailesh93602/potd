class Solution {
    bool check(int prod, int i) {
        if(i < 0 || prod < i) return false;
        if(prod == i) return true;
        
        return check(prod / 10, i - prod%10) ||
                check(prod / 100, i - prod%100) ||
                check(prod / 1000, i - prod%1000);
    }
public:
    int punishmentNumber(int n) {
        int ans = 0;

        for(int i=1; i<=n; i++) if(check(i * i, i)) ans += (i * i);

        return ans;
    }
};
