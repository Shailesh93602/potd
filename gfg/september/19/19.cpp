//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to reverse words in a given string.
    void reverse(string &s, int begin, int end) {
        while(begin < end) swap(s[begin++], s[end--]);
    }
    string reverseWords(string s) {
        // code here
        int start = -1;
        for(int i=0; i<s.size(); i++) {
            if(start == -1 && s[i] != '.') start = i;
            
            if(start != -1 && (s[i+1] == '.' || i+1 == s.size())) {
                reverse(s, start, i);
                start = -1;
            }
        }
        
        reverse(s, 0, s.size()-1);
        return s;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends
