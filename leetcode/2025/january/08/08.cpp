class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int count = 0, n = words.size();

        for(int i=0; i<n; i++) {
            for(int j=i+1; j<n; j++) {
                string s1 = words[i], s2 = words[j];

                if(s1.length() > s2.length()) continue;

                if(s2.find(s1) == 0 && s2.rfind(s1) == s2.size() - s1.size()) 
                    count++;
            }
        }

        return count;
    }
};
