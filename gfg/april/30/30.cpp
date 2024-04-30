//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
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

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
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

class Solution
{
    public:
    Node* reverse(Node* head) {
        Node* prev = nullptr;
        Node* current = head;
        Node* nextNode = nullptr;
        
        while (current != nullptr) {
            nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }
        
        return prev; 
    }
    
    struct Node* addTwoLists(struct Node* num1, struct Node* num2)
    {
        // code here
        Node* temp1 = reverse(num1);
        Node* temp2 = reverse(num2);
        
        Node* dummy = new Node(-1); 
        Node* result = dummy;
        
        int carry = 0; 
        
        while (temp1 || temp2 || carry != 0) {
            int sum = carry;
            
            if (temp1) {
                sum += temp1->data;
                temp1 = temp1->next;
            }
            
            if (temp2) {
                sum += temp2->data;
                temp2 = temp2->next;
            }
            carry = sum / 10;
            sum %= 10;
            result->next = new Node(sum);
            result = result->next;
        }
        
        Node* temp = dummy->next;
        delete dummy; 
        temp = reverse(temp);
        while(temp && temp->data == 0) {
            Node* todelete = temp;
            temp = temp->next;
            delete todelete;
        }
        if(!temp) return new Node(0);
        return temp;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* num1 = buildList(n);
        
        cin>>m;
        Node* num2 = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(num1,num2);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends
