/*
class Node {
public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/
class Solution {
  public:
    bool isSymmetric(Node* root) {
        // Code here
        if(!root) return true;
        
        queue<Node*> q;
        q.push(root->left);
        q.push(root->right);
        
        while(!q.empty()) {
            Node* curr1 = q.front();
            q.pop();
            Node* curr2 = q.front();
            q.pop();
            
            if(!curr1 && !curr2) continue;
            
            if(!curr1 || !curr2 || curr1->data != curr2->data) return false;
            
            q.push(curr1->left);
            q.push(curr2->right);
            q.push(curr1->right);
            q.push(curr2->left);
        }

        return true;
    }
};
