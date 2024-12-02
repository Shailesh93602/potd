class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int m = searchWord.length();
        istringstream s(sentence);
        string curr;
        int idx = 1;

        while(s >> curr) {
            if(curr.length() >= m and 
                curr.compare(0, m, searchWord) == 0) 
                    return idx;
            idx++;
        }
        
        return -1;
    }
};
