/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth == 1) {
            TreeNode* newNode = new TreeNode(val, root, NULL);
            return newNode;
        }

        queue<TreeNode*> q;
        int currDepth = 1;
        if(root) q.push(root);

        while(!q.empty()) {
            int qSize = q.size();
            for(int i=0; i<qSize; i++) {
                TreeNode* node = q.front();
                q.pop();
                if(currDepth== depth-1) {
                    TreeNode* newLeftNode = new TreeNode(val, node->left,NULL);
                    TreeNode* newRightNode = new TreeNode(val, NULL, node->right);
                    node->left = newLeftNode;
                    node->right = newRightNode;
                }

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            currDepth++;
        }
        return root;
    }
};
