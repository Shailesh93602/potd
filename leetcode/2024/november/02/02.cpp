class Solution {
public:
    bool isCircularSentence(string sentence) {
        int n = sentence.length();
        if(sentence[0] != sentence[n-1]) return false;
        
        vector<string> arr;
        string str = "";

        for(char ch: sentence) {
            if(ch == ' ') {
                arr.push_back(str);
                str = "";
            }
            else str += ch;
        }

        if(str != "") arr.push_back(str);

        for(int i=0; i<arr.size()-1; i++) {
            string s = arr[i];
            string s2 = arr[i+1];
            if(s[s.length()-1] != s2[0]) return false;
        }

        return true;
    }
};
