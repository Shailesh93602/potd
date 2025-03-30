class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans, first(26, 0), last(26, 0);
        int i = 0, j = 0, n = s.length();

        for(int k=0; k<n; k++) last[s[k] - 'a'] = k; 

        for(int k=0; k<n; k++) {
            if(!first[s[k] - 'a']) first[s[k] - 'a'] = k;

            if(j < first[s[k] - 'a']) {
                ans.push_back(j - i + 1);
                i = k;
                j = k;
            }

            j = max(j, last[s[k] - 'a']);
        }

        if(j- i + 1 > 0) ans.push_back(j - i + 1);

        return ans;
    }
};
