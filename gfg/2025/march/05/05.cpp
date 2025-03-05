//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int longestStringChain(vector<string>& words) {
        // Code here
        unordered_map<string, int> map;
        int ans = 1;
        
        sort(words.begin(), words.end(), [](const string &a, const string &b) {
            return a.size() < b.size();
        });
        
        for(string s: words) {
            map[s] = 1;
            
            for(int i=0; i<s.size(); i++) {
                string prev = s.substr(0, i) + s.substr(i+1);
                
                if(map.find(prev) != map.end()) 
                    map[s] = max(map[s], map[prev] + 1);
            }
            
            ans = max(ans, map[s]);
        }
        
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> words;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            words.push_back(number);
        }
        Solution obj;
        cout << obj.longestStringChain(words) << "\n";
        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends
