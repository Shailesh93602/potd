/* structure for a node
class Node {
 public:
  int data;
  Node *next;

  Node(int x){
      data = x;
      next = NULL;
  }
}; */

class Solution {
  public:
    Node* sortedInsert(Node* head, int data) {
        // code here
        Node* newNode = new Node(data);
        
        if(!head) {
            newNode->next = newNode;
            return newNode;
        }
        
        Node *curr = head, *next = head->next;
        
        if(data <= head->data) {
            Node* last = head;
            
            while(last->next != head) {
                last = last->next;
            }
            
            newNode->next = head;
            last->next = newNode;
            
            head = newNode;
            
            return head;
        }
        
        while(curr->next != head) {
            if(curr->data < data && next->data >= data) {
                newNode->next = curr->next;
                curr->next = newNode;
                return head;
            }
            else {
                curr = curr->next;
                next = next->next;
            }
        }

        newNode->next = head;
        curr->next = newNode;
        return head;
    }
};
