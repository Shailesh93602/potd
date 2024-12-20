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
    TreeNode* reverseOddLevels(TreeNode* root) {
        if(!root) return root;

        queue<TreeNode*> q;
        q.push(root);
        int x = 0;

        while(!q.empty()) {
            int n = q.size();
            vector<TreeNode*> ans;

            for(int i=0; i<n; i++) {
                TreeNode* curr = q.front();
                q.pop();
                ans.push_back(curr);

                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }

            if(x%2 != 0) {
                int i=0, j=ans.size()-1;

                while(i < j) {
                    int temp = ans[i]->val;
                    ans[i]->val = ans[j]->val;
                    ans[j]->val = temp;
                    i++;
                    j--;
                }
            }

            x++;
        }

        return root;
    }
};
