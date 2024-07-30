class Solution {
public:
    int minimumDeletions(string s) {
        int n = s.length();
        int ans = 0;
        int count = 0;
        
        for(int i=0; i<n; i++) {
            if(s[i] == 'b') count++;
            else ans = min(ans+1, count);
        }

        return ans;
    }
};
