//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
        // Your code here
        if(p.length() > s.length()) return "-1";
        
        vector<int> freqs(26, 0), freqp(26, 0);
        
        for(char c: p) freqp[c-'a']++;
        
        int count = 0, begin = 0, startIndex = 01;
        int length = 0, minLength = INT_MAX;
        
        for(int i=0; i<s.length(); i++) {
            freqs[s[i]-'a']++;
            
            if(freqp[s[i]-'a'] != 0 && freqs[s[i]-'a'] <= freqp[s[i]-'a']) count++;
            
            if(count == p.length()) {
                while(freqs[s[begin]-'a'] > freqp[s[begin]-'a'] || freqp[s[begin]-'a'] == 0) {
                    if(freqs[s[begin]-'a'] > freqp[s[begin]-'a'])
                        freqs[s[begin]-'a']--;
                    begin++;
                }
                
                length = i-begin+1;
                if(length < minLength) {
                    startIndex = begin;
                    minLength = length;
                }
            }
        }
        
        if(startIndex == -1 || minLength == INT_MAX) return "-1";
        
        return s.substr(startIndex, minLength);
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string pat;
        cin>>pat;
        Solution obj;
        cout<<obj.smallestWindow(s, pat)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends
