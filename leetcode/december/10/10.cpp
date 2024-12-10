class Solution {
public:
    bool isValid(string &s, int i) {
        int count = 0;
        vector<int> visited(26, 0);

        char curr = '.';

        for(char ch: s) {
            if(ch == curr) count++;
            else {
                count = 1;
                curr = ch;
            }

            if(count >= i && ++visited[ch-'a'] == 3) return true; 
        }

        return false;
    }
    int maximumLength(string s) {
        int i=0, j=s.length()-1;

        while(i < j) {
            int mid = (i + j) / 2;

            if(isValid(s, mid)) i = mid+1;
            else j = mid;
        }

        return i-1;
    }
};
