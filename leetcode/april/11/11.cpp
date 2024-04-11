class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;

        for(char c: num) {
            while(!st.empty() && k > 0 && st.top() > c) {
                st.pop();
                k--;
            }
            st.push(c);
        }

        while(k > 0 && !st.empty()) {
            st.pop();
            k--;
        }

        string ans = "";
        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        string res = "";
        bool flag = true;
        for(int i=0; i<ans.length(); i++) {
            if(flag && ans[i] == '0') continue;
            else {
                flag = false;
                res += ans[i];
            }
        }
        if(res == "") res = "0";
        return res;
    }
};
