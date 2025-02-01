class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);
        int n = s.length();
        vector<int> lastSeen(10, -1);
        
        for(int i=0; i<n; i++) lastSeen[s[i] - '0'] = i;

        for(int i=0; i<n; i++) {
            for(int j=9; j>s[i]-'0'; j--) {
                if(lastSeen[j] > i) {
                    swap(s[i], s[lastSeen[j]]);
                    return stoi(s);
                }
            }
        }

        return num;
    }
};
