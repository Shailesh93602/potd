//{ Driver Code Starts
// C++ program to merge k sorted arrays of size n each
#include <bits/stdc++.h>
using namespace std;

// A Linked List node
struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

/* Function to print nodes in a given linked list */
void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    cout << endl;
}


// } Driver Code Ends
/*Linked list Node structure

struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

class Solution {
    Node* merge(Node* head1, Node* head2) {
        Node* newHead = new Node(-1);
        Node* curr = newHead;
        
        while(head1 && head2) {
            if(head1->data <= head2->data) {
                curr->next = head1;
                head1 = head1->next;
            }
            else {
                curr->next = head2;
                head2 = head2->next;
            }
            
            curr = curr->next;
        }
        
        if(head1) curr->next = head1;
        else curr->next = head2;
        
        return newHead->next;
    }
    Node* solve(vector<Node*> arr, int i, int j) {
        if(i == j) return arr[i];
        
        int mid = i + (j-i)/2;
        Node* head1 = solve(arr, i, mid);
        Node* head2 = solve(arr, mid+1, j);
        
        return merge(head1, head2);
    }
  public:
    Node* mergeKLists(vector<Node*>& arr) {
        // Your code here
        if(!arr.size()) return NULL;
        
        return solve(arr, 0, arr.size() - 1);
    }
};


//{ Driver Code Starts.

// Driver program to test the above functions
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n;
        cin >> n;
        cin.ignore();

        vector<Node*> v(n);

        for (int i = 0; i < n; i++) {
            string line;
            getline(cin, line);
            stringstream ss(line);

            Node* head = new Node(0);
            Node* temp = head;
            int x;
            while (ss >> x) {
                Node* newNode = new Node(x);
                temp->next = newNode;
                temp = temp->next;
            }
            v[i] = head->next;
        }

        Solution ob;
        Node* head = ob.mergeKLists(v);
        printList(head);
    }

    return 0;
}

// } Driver Code Ends
