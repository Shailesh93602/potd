class Solution {
    string solve(string s) {
        int i=0, j=1, n=s.length();

        while(j < n) {
            int k = 0;

            while(j + k < n && s[i + k] == s[j + k]) k++;
            
            if(j + k < n && s[i + k] < s[j + k]) {
                int temp = i;
                i = j;
                j = max(j + 1, temp + k + 1);
            } else j += (k + 1);
        }

        return s.substr(i, n - i);
    }
public:
    string answerString(string word, int numFriends) {
        if(numFriends == 1) return word;

        string ans = solve(word);

        return ans.substr(0, min(ans.length(), word.length() - numFriends + 1));
    }
};
