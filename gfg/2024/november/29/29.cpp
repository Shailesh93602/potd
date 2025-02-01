//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string addBinary(string& s1, string& s2) {
        // your code here
        int i = s1.length()-1, j = s2.length() - 1;
        
        string res = "";
        int c = 0;
        
        while(i >= 0 || j >= 0 || c == 1) {
            int temp = c;
            if(i >= 0) temp += s1[i]-'0';
            if(j >= 0) temp += s2[j]-'0';
            
            switch(temp) {
                case 0:
                    res += '0';
                    break;
                case 1:
                    res += '1';
                    c = 0;
                    break;
                case 2:
                    res += '0';
                    c = 1;
                    break;
                default:
                    res += '1';
                    c = 1;
                    break;
            }
            
            i--;
            j--;
        }

        reverse(res.begin(), res.end());
        
        int pos = -1;
        for(int i=0; i<res.length(); i++) {
            if(res[i] != '0') {
                pos = i;
                break;
            }
        }
        
        if(pos == -1) return "0";
        
        return res.substr(pos);

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string A, B;
        cin >> A >> B;
        Solution ob;
        cout << ob.addBinary(A, B);
        cout << "\n";

        cout << "~"
             << "\n";
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends
