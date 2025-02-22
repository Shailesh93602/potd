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
    TreeNode* recoverFromPreorder(string traversal) {
        stack<TreeNode*> st;
        int i=0, n=traversal.size();

        while(i < n) {
            int len = 0;
            while(i < n && traversal[i] == '-') {
                len++;
                i++;
            }

            int val = 0;
            while(i < n && isdigit(traversal[i])) {
                val *= 10;
                val += traversal[i++] - '0';
            }

            TreeNode* temp = new TreeNode(val);
            while(st.size() > len) st.pop();

            if(!st.empty()) {
                if(!st.top()->left) st.top()->left = temp;
                else st.top()->right = temp;
            }

            st.push(temp);
        }

        while(st.size() > 1) st.pop();
        
        return st.top();
    }
};
