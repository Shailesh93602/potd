//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string findOrder(vector<string> &words) {
        // code here
        vector<vector<int>> map(26);
        vector<int> counts(26, 0);
        vector<bool> found(26, false);
        
        for(string &s: words) 
            for(char ch: s)
                found[ch - 'a'] = true;
                
        for(int i=0; i<words.size()-1; i++) {
            string s1 = words[i], s2 = words[i + 1];
            int n = s1.length(), m = s2.length();
            int j = 0;
            
            while(j < min(n, m) && s1[j] == s2[j]) j++;
            
            if(j < min(n, m)) {
                int x = s1[j] - 'a', y = s2[j] - 'a';
                map[x].push_back(y);
                counts[y]++;
            }
            else if(n > m) return "";
        }
        
        queue<int> q;
        for(int i=0; i<26; i++) 
            if(found[i] && counts[i] == 0)
                q.push(i);
                
        string ans;
        while(!q.empty()) {
            int x = q.front();
            q.pop();
            ans += (char)(x + 'a');
            
            for(int y: map[x]) {
                counts[y]--;
                
                if(counts[y] == 0) q.push(y);
            }
        }
        
        for(int i=0; i<26; i++)
            if(found[i] && counts[i] != 0)
                return "";
            
        return ans;
    }
};


//{ Driver Code Starts.

bool validate(const vector<string> &original, const string &order) {
    unordered_map<char, int> mp;
    for (const string &word : original) {
        for (const char &ch : word) {
            mp[ch] = 1;
        }
    }
    for (const char &ch : order) {
        if (mp.find(ch) == mp.end())
            return false;
        mp.erase(ch);
    }
    if (!mp.empty())
        return false;

    for (int i = 0; i < order.size(); i++) {
        mp[order[i]] = i;
    }

    for (int i = 0; i < original.size() - 1; i++) {
        const string &a = original[i];
        const string &b = original[i + 1];
        int k = 0, n = a.size(), m = b.size();
        while (k < n and k < m and a[k] == b[k]) {
            k++;
        }
        if (k < n and k < m and mp[a[k]] > mp[b[k]]) {
            return false;
        }
        if (k != n and k == m) {
            return false;
        }
    }
    return true;
}

int main() {
    string str;
    getline(cin, str);
    int t = stoi(str);
    while (t--) {
        getline(cin, str);
        stringstream ss(str);
        string curr;
        vector<string> words;
        while (ss >> curr)
            words.push_back(curr);

        vector<string> original = words;

        Solution ob;
        string order = ob.findOrder(words);

        if (order.empty()) {
            cout << "\"\"" << endl;
        } else {
            cout << (validate(original, order) ? "true" : "false") << endl;
        }
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
