class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        set<string> s;
        for(auto i: dictionary) s.insert(i);

        string temp = "";
        string ans = "";
        vector<string> str;
        for(auto i: sentence) {
            if(i == ' ') {
                str.push_back(temp);
                temp = "";
            }
            else temp += i;
        }
        str.push_back(temp);
        temp = "";

        for(auto word: str) {
            string tempWord = word;
            for(int i=0; i<=word.size(); i++) {
                temp = word.substr(0, i);
                if(s.find(temp) != s.end()) break;
            }
            ans += temp + " ";
            temp = "";
        }
        ans.pop_back();
        return ans;
    }
};
