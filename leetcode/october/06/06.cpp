class Solution {
public:
    bool areSentencesSimilar(string s1, string s2) {
        stringstream ss1(s1), ss2(s2);
        vector<string> words1, words2;
        string word;

        while(ss1 >> word) words1.push_back(word);
        while(ss2 >> word) words2.push_back(word);

        int n = words1.size(), m = words2.size();
        int i = 0, j = n-1, k = m-1;

        if(n > m) return areSentencesSimilar(s2, s1);

        while(i <= j && words1[i] == words2[i]) i++;
        while(j >= 0 && words1[j] == words2[k]) {
            j--;
            k--;
        }

        return j < i;
    }
};
