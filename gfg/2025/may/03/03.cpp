//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int val;
    Node* next;

    Node(int x) {
        val = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->val << " ";
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends

// User function Template for C++

/*
class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};
*/

class Solution {
    vector<int> solve(int n) {
        vector<int> ans(n + 1, 1);
        ans[0] = 0;
        ans[1] = 0;
        
        for(int i=2; i*i <= n; i++) 
            if(ans[i]) 
                for(int j=i*i; j<=n; j+=i) 
                    ans[j] = 0;
        
        return ans;
    }
  public:
    Node *primeList(Node *head) {
        // code here
        int maxVal = 0;
        Node* temp = head;
        
        while(temp) {
            maxVal = max(maxVal, temp->val);
            temp = temp->next;
        }
        
        vector<int> ans = solve(2 * maxVal);
        temp = head;
        
        while(temp) {
            int i = temp->val;
            
            if(i == 1) temp->val = 2;
            else {
                int j = i, k = i;
                
                while(!ans[j]) j--;
                while(!ans[k]) k++;
                
                if(i-j > k-i) temp->val = k;
                else temp->val = j;
            }
            
            temp = temp->next;
        }

        return head;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }

        int data = arr[0];
        struct Node* head = new Node(data);
        struct Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }

        Solution ob;
        head = ob.primeList(head);
        printList(head);
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends
