//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string roundToNearest(string str) {
        // Complete the function
        string s = str;
        int n = s.length();
        if((s[n-1]-'0') <= 5) s[n-1] = '0';
        else {
            bool flag = true;
            int i = n-1;
            s[i] = '0';
            while(i-- >= 0) {
                if(s[i] == '9') s[i] = '0';
                else {
                    flag = false;
                    s[i] = (s[i]-'0')+1+'0';
                    break;
                }
            }
            
            if(flag) {
                s = '1'+s;
            }
        }
        
        return s;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.roundToNearest(str) << endl;
    }

    return 0;
}
// } Driver Code Ends
