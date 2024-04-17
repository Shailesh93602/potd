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
    void solve(TreeNode* root, vector<string> &str, string temp) {
        if(!root) return;
        char ch = root->val+'a';
        temp += ch;
        if(!root->left && !root->right) {
            str.push_back(temp);
            return;
        }
        solve(root->left, str, temp);
        solve(root->right, str, temp);
    }
    string smallestFromLeaf(TreeNode* root) {
        if(!root) return "";
        vector<string> str;
        string temp = "";
        solve(root, str, temp);
        for(string &s: str) reverse(s.begin(), s.end());
        sort(str.begin(), str.end());
        return str[0];
    }
};
