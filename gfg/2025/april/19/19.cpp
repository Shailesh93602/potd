//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Node {
    public:
        Node* one;
        Node* zero;
        Node() {
            one = NULL;
            zero = NULL;
        }
};

class Trie {
    public:    
        Node* root;
        Trie() {
            root = new Node();
        }
        
        void insert(int n) {
            Node* curr = root;
            
            for(int i=31; i>=0; i--) {
                int bit = (n >> i) & 1;
                
                if(bit == 0) {
                    if(!curr->zero) curr->zero = new Node();
                    
                    curr = curr->zero;
                }
                else {
                    if(!curr->one) curr->one = new Node();
                    curr = curr->one;
                }
            }
        }
        
        int findXOR(int n) {
            Node* curr = root;
            int ans = 0;
            
            for(int i=31; i>=0; i--) {
                int bit = (n >> i) & 1;
                
                if(bit == 0) {
                    if(curr->one) {
                        curr = curr->one;
                        ans += (1 << i);
                    }
                    else curr = curr->zero;
                }
                else if(curr->zero) {
                    curr = curr->zero;
                    ans += (1 << i);
                }
                else curr = curr->one;
            }
            
            return ans;
        }
};

class Solution {
  public:
    int maxXor(vector<int> &arr) {
        // code here
        int ans = 0;
        Trie* t = new Trie();
        
        t->insert(arr[0]);
        
        for(int i=1; i<arr.size(); i++) {
            ans = max(t->findXOR(arr[i]), ans);
            
            t->insert(arr[i]);  
        }
        
        return ans;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        Solution ob;
        cout << ob.maxXor(arr) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends
