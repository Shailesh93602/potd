class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> ans;

        sort(words.begin(), words.end(), [&](string a, string b) {
            return a.size() > b.size();
        });

        for(int i=0; i<words.size(); i++) 
            for(int j=i+1; j<words.size(); j++) 
                if(words[i].find(words[j]) != string::npos) 
                    ans.push_back(words[j]);

        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        
        return ans;
    }
};
