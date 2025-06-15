class Solution {
public:
    int maxDiff(int num) {
        auto replace = [](string &s, char x, char y) {
            for(char &ch: s) if(ch == x) ch = y;
        };

        string minVal = to_string(num), maxVal = to_string(num);

        for(char ch: maxVal) {
            if(ch != '9') {
                replace(maxVal, ch, '9');
                break;
            }
        }

        for(int i=0; i<minVal.size(); i++) {
            char ch = minVal[i];

            if(i == 0) {
                if(ch != '1') {
                    replace(minVal, ch, '1');
                    break;
                }
            } else if(ch != '0' && ch != minVal[0]) {
                replace(minVal, ch, '0');
                break;
            }
        }

        return stoi(maxVal) - stoi(minVal);
    }
};
