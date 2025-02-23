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
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        stack<TreeNode*> st;
        TreeNode* root = new TreeNode(preorder[0]);
        st.push(root);
        int i=1, j=0;

        while(!st.empty()) {
            TreeNode* curr = st.top();

            if(curr->val == postorder[j]) {
                st.pop();
                j++;
            }
            else {
                TreeNode* temp = new TreeNode(preorder[i++]);
                
                if(!curr->left) curr->left = temp;
                else curr->right = temp;

                st.push(temp);
            }
        }

        return root;
    }
};
