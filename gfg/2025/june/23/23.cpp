class Solution {
    string solve(string &s1, string &s2) {
        int i = s1.length() - 1, j = s2.length() - 1;
        int c = 0;
        string ans = "";
        
        while(i >= 0 || j >= 0 || c > 0) {
            int sum = c;
            if(i >= 0) sum += (s1[i] - '0');
            if(j >= 0) sum += (s2[j] - '0');
            
            ans.push_back(sum%10 + '0');
            c = sum / 10;
            i--;
            j--;
        }
        
        while(!ans.empty() && ans.back() == '0') ans.pop_back();
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
  public:
    string minSum(vector<int> &arr) {
        // code here
        vector<int> ans(10, 0);
        
        for(int &i: arr) ans[i]++;
        
        string s1 = "", s2 = "";
        bool isFirst = true;
        
        for(int i=0; i<10; i++) {
            while(ans[i]--) {
                if(isFirst) {
                    if(!(s1.empty() && i == 0)) s1.push_back(i + '0');
                    isFirst = false;
                } else {
                    if(!(s2.empty() && i == 0)) s2.push_back(i + '0');
                    isFirst = true;
                }
            }
        }
        
        if(s1.empty()) s1 = '0';
        if(s2.empty()) s2 = '0';
        
        return solve(s1, s2);
    }
};
