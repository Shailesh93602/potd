class Solution {
public:
    string minRemoveToMakeValid(string s) {
         int leftCount = 0;
        int rightCount = 0;
        stack<char> st;

        for (char ch : s) {
            if (ch == '(') {
                leftCount++;
            } else if (ch == ')') {
                rightCount++;
            }
            if (rightCount > leftCount) {
                rightCount--;
                continue;
            } else {
                st.push(ch);
            }
        }

        string ans = "";
        
        while (!st.empty()) {
            char curr = st.top();
            st.pop();
            if (leftCount > rightCount && curr == '(') {
                leftCount--;
            } else {
                ans += curr;
            }
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};