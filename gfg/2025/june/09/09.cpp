/*The Node structure is
class Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};*/

class Solution {
    bool solve(Node* root, int minVal, int maxVal) {
        if(!root) return false;
        
        if(!root->left && !root->right) return minVal == maxVal;
        
        return solve(root->left, minVal, min(root->data - 1, maxVal)) || 
                solve(root->right, max(root->data + 1, minVal), maxVal);
    }

  public:
    bool isDeadEnd(Node *root) {
        // Code here
        return solve(root, 1, INT_MAX);
    }
};
