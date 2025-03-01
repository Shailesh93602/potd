//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    string decodedString(string &s) {
        // code here
        string ans = "";
        
        for(int i=0; i<s.length(); i++) {
            while(s[i] != ']') ans.push_back(s[i++]);
            
            string temp = "";
            while(!ans.empty() && ans.back() != '[') {
                temp = ans.back() + temp;
                ans.pop_back();
            }
                
            ans.pop_back();
                
            string num = "";
            while(!ans.empty() && ans.back() >= '0' && ans.back() <= '9') {
                num = ans.back() + num;
                ans.pop_back();
            }
            
            int count = stoi(num);
            while(count--) ans.append(temp);
        }
        
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        cout << ob.decodedString(s) << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends
