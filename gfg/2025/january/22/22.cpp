//{ Driver Code Starts
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node* buildList() {
    vector<int> arr;
    string input;
    getline(cin, input);
    stringstream ss(input);
    int number;
    while (ss >> number) {
        arr.push_back(number);
    }
    if (arr.empty()) {
        return NULL;
    }
    int val = arr[0];
    int size = arr.size();

    Node* head = new Node(val);
    Node* tail = head;

    for (int i = 1; i < size; i++) {
        val = arr[i];
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}

void printList(Node* n) {
    while (n) {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution {
    Node* reverseList(Node* head) {
        Node *prev = NULL, *curr = head, *next = NULL;
        
        while(curr) {
            next = curr->next;
            curr->next = prev;
            
            prev = curr;
            curr = next;
        }
        
        return prev;
    }
    Node* trim(Node* head) {
        while(head->next && head->data == 0) head = head->next;
        
        return head;
    }
  public:
    Node* addTwoLists(Node* num1, Node* num2) {
        // code here
        Node *head = NULL, *curr = NULL;
        int c = 0;
        
        num1 = trim(num1);
        num2 = trim(num2);
        
        num1 = reverseList(num1);
        num2 = reverseList(num2);
        
        while(num1 || num2 || c) {
            int sum = c;
            
            if(num1) {
                sum += num1->data;
                num1 = num1->next;
            }
            
            if(num2) {
                sum += num2->data;
                num2 = num2->next;
            }
            
            Node* temp = new Node(sum % 10);
            c = sum / 10;
            
            if(!head) {
                head = temp;
                curr = temp;
            }
            else {
                curr->next = temp;
                curr = curr->next;
            }
        }
        
        return reverseList(head);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline character after the integer input

    while (t--) {
        Node* num1 = buildList();
        Node* num2 = buildList();
        Solution ob;
        Node* res = ob.addTwoLists(num1, num2);
        printList(res);
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
