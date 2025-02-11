class Solution {
    bool isValid(stack<char> &st, string part, int n) {
        stack<char> temp = st;

        for(int i=n-1; i>=0; i--) {
            if(temp.top() != part[i]) return false;

            temp.pop();
        }

        return true;
    }
public:
    string removeOccurrences(string s, string part) {
        stack<char> st;
        int n = s.length(), m = part.length();

        for(char ch: s) {
            st.push(ch);

            if(st.size() >= m && isValid(st, part, m)) 
                for(int j=0; j<m; j++) 
                    st.pop();
        }

        string ans = "";
        while(!st.empty()) {
            ans = st.top() + ans;
            st.pop();
        }

        return ans;
    }
};
