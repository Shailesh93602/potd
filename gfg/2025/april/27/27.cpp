//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    /*You are required to complete below function */
    string multiplyStrings(string& s1, string& s2) {
        // Your code here
        bool isNeg = false;
        if(s1[0] == '-') {
            isNeg = true;
            s1 = s1.substr(1);
        }
        if(s2[0] == '-') {
            isNeg = !isNeg;
            s2 = s2.substr(1);
        }
        
        int n = s1.size(), m = s2.size();
        vector<int> res(n + m, 0);

        for(int i=n-1; i>=0; i--) {
            for(int j=m-1; j>=0; j--) {
                int mul = (s1[i] - '0') * (s2[j] - '0');
                int sum = res[i + j + 1] + mul;
                res[i + j] += sum / 10;
                res[i + j + 1] = sum % 10;
            }
        }

        string ans = "";
        int i = 0;
        while(i < res.size() && res[i] == 0) i++;
        
        if(i == res.size()) return "0";
        
        while(i < res.size()) ans += (res[i++] + '0');
        
        if(isNeg) ans = '-' + ans;
        
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string a;
        string b;
        cin >> a >> b;
        Solution obj;
        cout << obj.multiplyStrings(a, b) << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends
