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
    void solve(TreeNode* root, int num, vector<int>& nums) {
        if(!root) return;
        num *= 10;
        num += root->val;
        if(!root->left && !root->right) {
            nums.push_back(num);
            return;
        } 
        solve(root->left, num, nums);
        solve(root->right, num, nums);
    }
    int sumNumbers(TreeNode* root) {
        int sum = 0;
        vector<int> nums;
        solve(root, 0, nums);
        for(int num: nums) sum += num;
        return sum;
    }
};
