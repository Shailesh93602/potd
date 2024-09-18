//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char> s;
        for(char ch: x) {
            if(ch == '(' || ch == '[' || ch == '{') {
                s.push(ch);
            }
            else if(s.empty()) return false;
            else if((ch == ')' && s.top() == '(') ||
                    (ch == ']' && s.top() == '[') ||
                    (ch == '}' && s.top() == '{')) s.pop();
            else return false;
        }
        return s.empty();
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends
