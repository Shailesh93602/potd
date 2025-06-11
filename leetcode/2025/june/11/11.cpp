class Solution {
public:
    int maxDifference(string s, int k) {
        auto getStatus = [](int a, int b) -> int {
            return ((a & 1) << 1) | (b & 1);
        };

        int n = s.length(), ans = INT_MIN;

        for(char ch1='0'; ch1<='4'; ch1++) {
            for(char ch2 = '0'; ch2<='4'; ch2++) {
                if(ch1 == ch2) continue;

                vector<int> temp(4, INT_MAX);
                int count1 = 0, count2 = 0, prev1 = 0, prev2 = 0, i = -1;

                for(int j=0; j<n; j++) {
                    if(s[j] == ch1) count1++;
                    if(s[j] == ch2) count2++;

                    while(j - i >= k && count2 - prev2 >= 2) {
                        int leftVal = getStatus(prev1, prev2);
                        temp[leftVal] = min(temp[leftVal], prev1 - prev2);

                        if(s[++i] == ch1) prev1++;
                        if(s[i] == ch2) prev2++;
                    }

                    int rightVal = getStatus(count1, count2);
                    if(temp[rightVal ^ 0b10] != INT_MAX) 
                        ans = max(ans, count1 - count2 - temp[rightVal ^ 0b10]);
                }
            }
        }

        return ans;
    }
};
