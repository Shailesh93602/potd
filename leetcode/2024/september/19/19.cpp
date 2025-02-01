class Solution {
public:
    vector<int> diffWaysToCompute(string expression) {
        vector<int> ans;

        if(expression.length() == 0) return ans;

        if(expression.length() == 1) {
            ans.push_back(stoi(expression));
            return ans;
        }

        if(expression.length() == 2 && isdigit(expression[0])) {
            ans.push_back(stoi(expression));
            return ans;
        }

        for(int i=0; i<expression.length(); i++) {
            char curr = expression[i];

            if(isdigit(curr)) continue;

            vector<int> left = diffWaysToCompute(expression.substr(0, i));
            vector<int> right = diffWaysToCompute(expression.substr(i+1));

            for(int x: left) {
                for(int y: right) {
                    int temp = 0;
                    
                    switch(curr) {
                        case '+':
                            temp = x + y;
                            break;
                        case '-':
                            temp = x - y;
                            break;
                        case '*':
                            temp = x * y;
                            break;
                    }

                    ans.push_back(temp);
                }
            }
        }
        return ans;
    }
};
