class Solution {
public:
    bool canBeValid(string s, string locked) {
        int n = s.length();
        if(n%2 != 0) return false;

        int count = 0;
        for(int i=0; i<n; i++) {
            if(s[i] == '(' || locked[i] == '0') count++;
            else count--;

            if(count < 0) return false;
        }

        count = 0;
        for(int i=n-1; i>=0; i--) {
            if(s[i] == ')' || locked[i] == '0') count++;
            else count--;

            if(count < 0) return false;
        }

        return true;
    }
};
