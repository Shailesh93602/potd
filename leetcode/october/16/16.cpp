class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        string ans = "";
        vector<int> counts(3, 0);
        int n = a + b + c;
        
        for(int i=0; i<n; i++) {
            if((a >= b && a >= c && counts[0] != 2) 
            || (a > 0 && (counts[1] == 2 || counts[2] == 2))) {
                ans += 'a';
                a--;
                counts[0]++;
                counts[1] = counts[2] = 0;
            } 
            else if(( b >= a && b >= c && counts[1] != 2) 
            || (b > 0 && (counts[2] == 2 || counts[0] == 2))) {
                ans += 'b';
                b--;
                counts[1]++;
                counts[0] = counts[2] = 0;
            }
            else if((c >= a && c >= b && counts[2] != 2) 
            || (c > 0 && (counts[0] == 2 || counts[1] == 2))) {
                ans += 'c';
                c--;
                counts[2]++;
                counts[0] = counts[1] = 0;
            }
        }

        return ans;
    }
};
