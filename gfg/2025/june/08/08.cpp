class Solution {
    string add(string &num1, string &num2) {
        int n = num1.length(), m = num2.length();
        
        if(n < m) return add(num2, num1);
        
        string ans = "";
        int c = 0;
        
        for(int i=0; i<m; i++) {
            int sum = (num1[n - i - 1] - '0') + (num2[m - i - 1] - '0');
            
            ans = char((sum + c) % 10 + '0') + ans;
            c = (sum + c) / 10;
        }
        
        for(int i=m; i<n; i++) {
            int d = num1[n - i - 1] - '0';
            int digit = (d + c) % 10;
            c = (d + c) / 10;
            ans = char(digit + '0') + ans;
        }
        
        if(c) ans = char(c + '0') + ans;
        
        return ans;
    }
    
    bool check(string &s, int i, int n, int m) {
        string s1 = s.substr(i, n);
        string s2 = s.substr(i + n, m);
        string sum = add(s1, s2);
        
        int len = sum.length();
        
        if(i + n + m + len > s.length()) return false;
        
        if(sum == s.substr(i + n + m, len)) {
            if(i + n + m + len == s.length()) return true;
            
            return check(s, i + n, m, len);
        }
    
        return false;
    }
    
  public:
    bool isSumString(string &s) {
        // code here
        int n = s.length();
        
        for(int i=1; i<n; i++)
            for(int j=1; i + j < n; j++) 
                if(check(s, 0, i, j)) 
                    return true;
        
        return false;
    }
};
