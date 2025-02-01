class Solution {
public:
    int takeCharacters(string s, int k) {
        int n = s.length();
        vector<int> counts(3, 0);

        for(char c: s) counts[c - 'a']++;
        for(int i: counts) if(i < k) return -1;

        vector<int> window(3, 0);
        int i=0, maxWindow=0;

        for(int j=0; j<n; j++) {
            window[s[j] - 'a']++;

            while(i <= j 
                && (counts[0] - window[0] < k 
                || counts[1] - window[1] < k 
                || counts[2] - window[2] < k)) 
                    window[s[i++] - 'a']--;

            maxWindow = max(maxWindow, j - i + 1);
        }        

        return n - maxWindow;
    }
};
