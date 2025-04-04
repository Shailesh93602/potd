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
    pair<TreeNode*, int> solve(TreeNode* root) {
        if(!root) return { NULL, 0 };

        pair<TreeNode*, int> left = solve(root->left), right = solve(root->right);

        if(left.second > right.second) return { left.first, left.second + 1 };
        if(left.second < right.second) return { right.first, right.second + 1 };

        return { root, left.second + 1 };
    }
public:
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        return solve(root).first;
    }
};
