class Solution {
public:
    string robotWithString(string s) {
        unordered_map<char, int> map;
        for(char ch: s) map[ch]++;

        stack<char> st;
        string ans;
        char minChar = 'a';

        for(char ch: s) {
            st.emplace(ch);
            map[ch]--;

            while(minChar != 'z' && map[minChar] == 0) minChar++;

            while(!st.empty() && st.top() <= minChar) {
                ans.push_back(st.top());
                st.pop();
            }
        }
        
        return ans;
    }
};
