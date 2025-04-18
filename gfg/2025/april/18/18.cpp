//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++
struct Node {
    Node* ans[26];
    bool isEnd = false;
    
    bool containsKey(char ch) {
        return ans[ch - 'a'] != NULL;
    }
    
    void put(char ch, Node* root) {
        ans[ch - 'a'] = root;
    }
    
    Node* get(char ch) {
        return ans[ch - 'a'];
    }
    
    void setEnd() {
        isEnd = true;
    }
    
    bool getEnd() {
        return isEnd;
    }
};

class Trie {
    Node* root;
  public:
    Trie() {
        // implement Trie
        root = new Node();
    }

    void insert(string &word) {
        // insert word into Trie
        Node* curr = root;
        
        for(char &ch: word) {
            if(!curr->containsKey(ch)) curr->put(ch, new Node());
            
            curr = curr->get(ch);
        }
        
        curr->setEnd();
    }

    bool search(string &word) {
        // search word in the Trie
        Node* curr = root;
        
        for(char &ch: word) {
            if(!curr->containsKey(ch)) return false;
            
            curr = curr->get(ch);
        }
        
        return curr->getEnd();
    }

    bool isPrefix(string &word) {
        // search prefix word in the Trie
        Node* curr = root;
        
        for(char &ch: word) {
            if(!curr->containsKey(ch)) return false;
            
            curr = curr->get(ch);
        }
        
        return true;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int q;
        cin >> q;
        cin.ignore();
        vector<bool> ans;
        Trie ob;
        for (int i = 0; i < q; i++) {
            int x;
            cin >> x;
            string s;
            cin >> s;
            cin.ignore();
            if (x == 1) {
                ob.insert(s);
            } else if (x == 2) {
                ans.push_back(ob.search(s));
            } else if (x == 3) {
                ans.push_back(ob.isPrefix(s));
            }
        }
        cout << boolalpha;
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends
