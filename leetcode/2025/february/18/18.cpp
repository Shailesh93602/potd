class Solution {
public:
    string smallestNumber(string pattern) {
        int n = pattern.length(), maxVal = 0, currMax = 0, temp;
        vector<int> ans(n+1, 0);

        for(int i=n-1; i>=0; i--) 
            if(pattern[i] == 'D') 
                ans[i] = ans[i+1] + 1;
        
        string res = "";
        for(int i=0; i<=n; i++) {
            if(pattern[i] == 'I') {
                maxVal++;
                res += '0' + maxVal;
                maxVal = max(maxVal, currMax);

                currMax = 0;
            }
            else {
                temp = 1 + maxVal + ans[i];
                res += '0' + temp;

                currMax = max(currMax, temp);
            }
        }

        return res;
    }
};
