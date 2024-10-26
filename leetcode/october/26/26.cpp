/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    map<int, int> left, right, height;
    int heights(TreeNode* root) {
        if (!root)
            return 0;

        int l = heights(root->left);
        int r = heights(root->right);

        left[root->val] = l;
        right[root->val] = r;

        return max(l, r) + 1;
    }
    void solve(TreeNode* root, int maxVal, int depth) {
        if (!root)
            return;

        height[root->val] = maxVal;

        solve(root->left, max(maxVal, depth + right[root->val]), depth + 1);
        solve(root->right, max(maxVal, depth + left[root->val]), depth + 1);
    }
    vector<int> treeQueries(TreeNode* root, vector<int>& queries) {
        heights(root);
        solve(root->left, right[root->val], 1);
        solve(root->right, left[root->val], 1);

        vector<int> ans;
        for(int i: queries) ans.push_back(height[i]);

        return ans;
    }
};
