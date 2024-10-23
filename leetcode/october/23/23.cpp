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
    TreeNode* replaceValueInTree(TreeNode* root) {
        if(!root) return root;

        queue<TreeNode*> q;
        q.push(root);
        int sum = root->val;

        while(!q.empty()) {
            int n = q.size();
            queue<TreeNode*> curr;
            int temp = 0;

            while(n--) {
                TreeNode* front = q.front();
                q.pop();
                front->val = sum - front->val;
                int siblingSum = 0;
                
                if(front->right) siblingSum += front->right->val;
                if(front->left) {
                    siblingSum += front->left->val;
                    temp += front->left->val;
                    front->left->val = siblingSum;
                    q.push(front->left);
                }
                if(front->right) {
                    temp += front->right->val;
                    front->right->val = siblingSum;
                    q.push(front->right);
                }
            }

            sum = temp;
        }

        return root;
    }
};
