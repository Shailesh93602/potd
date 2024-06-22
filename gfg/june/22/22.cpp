//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long ExtractNumber(string sentence) {

        // code here
        regex regex("\\d+");
        smatch match;
        
        string s = sentence;
        vector<string> numbers;

        while (regex_search(s, match, regex)) {
            numbers.push_back(match.str());
            s = match.suffix().str();
        }

        long long ans = -1;
        long long lens = LLONG_MIN;

        for (const auto& num : numbers) {
            if (num.find('9') == string::npos) {
                long long numValue = stoll(num);
                if (lens < numValue) {
                    ans = numValue;
                    lens = numValue;
                }
            }
        }

        return ans;
    }
};

//{ Driver Code Starts.
int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);

        Solution ob;
        cout << ob.ExtractNumber(s) << "\n";
    }

    return 0;
}

// } Driver Code Ends
