//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    bool kPangram(string str, int k) {
        // code here
        int n = str.length();
        if(n < 26) return false;
        vector<int> freq(26, 0);
        
        for(char c: str) {
            if(c != ' ') freq[c - 'a']++;
        }
        
        int count = 0;
        for(int i=0; i<26; i++) {
            if(freq[i]) count += freq[i]-1;  
            else {
                count--;
                k--;
            }
        }
        
        return count >= 0 && k >= 0;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        string str;
        getline(cin, str);

        int k;
        cin >> k;

        Solution ob;
        bool a = ob.kPangram(str, k);
        if (a)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends
