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
class FindElements {
    unordered_set<int> s;
public:
    FindElements(TreeNode* root) {
        queue<TreeNode*> q;
        root->val = 0;
        q.push(root);

        while(!q.empty()) {
            TreeNode* curr = q.front();
            q.pop();

            s.insert(curr->val);
            if(curr->left) {
                curr->left->val = curr->val * 2 + 1;
                q.push(curr->left);
            }
            if(curr->right) {
                curr->right->val = curr->val * 2 + 2;
                q.push(curr->right);
            }
        }
    }
    
    bool find(int target) {
        return s.find(target) != s.end();
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */
