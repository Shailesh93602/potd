class Solution {
    bool isKRepeated(const string &s, const string &t, int k) {
        int i = 0, matched = 0, n = s.size(), m = t.size();

        for(char ch: s) {
            if(ch == t[i]) {
                i++;

                if(i == m) {
                    i = 0;
                    matched++;

                    if(matched == k) return true;
                }
            }
        }

        return false;
    }
public:
    string longestSubsequenceRepeatedK(string s, int k) {
        vector<int> map(26);

        for(char ch: s) map[ch - 'a']++;

        vector<char> candidate;
        for(int i=25; i>=0; i--) 
            if(map[i] >= k)
                candidate.push_back('a' + i);

        queue<string> q;
        for(char ch: candidate) 
            q.push(string(1, ch));

        string ans = "";
        while(!q.empty()) {
            string curr = q.front();
            q.pop();

            if(curr.size() > ans.size()) ans = curr;

            for(char ch: candidate) {
                string next = curr + ch;

                if(isKRepeated(s, next, k)) q.push(next);
            }
        }

        return ans;
    }
};
