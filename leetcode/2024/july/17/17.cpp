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
    bool set[1001] = {};
    void solve(TreeNode* &root, bool flag, vector<TreeNode*> &ans) {
        if(!root) return;
        solve(root->left, set[root->val], ans);
        solve(root->right, set[root->val], ans);
        if(!set[root->val] && flag) ans.push_back(root);
        if(set[root->val]) root = NULL;
    }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        vector<TreeNode*> ans;
        for(int i: to_delete) set[i] = true;
        solve(root, true, ans);
        return ans;
    }
};
