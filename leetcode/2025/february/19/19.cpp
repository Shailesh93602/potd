class Solution {
public:
    string getHappyString(int n, int k) {
        stack<string> s;
        int i = 0;
        s.push("");

        while(!s.empty()) {
            string curr = s.top();
            int len = curr.length();
            s.pop();

            if(len == n) {
                if(++i == k) return curr;
            }
            else 
                for(char ch: { 'c', 'b', 'a' }) 
                    if(curr.empty() || curr.back() != ch) 
                        s.push(curr + ch);
        }

        return "";
    }
};
