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
    int minimumOperations(TreeNode* root) {
        if(!root) return 0;

        queue<TreeNode*> q;
        q.push(root);
        int count = 0;

        while(!q.empty()) {
            int n = q.size();
            vector<int> ans;

            for(int i=0; i<n; i++) {
                TreeNode* curr = q.front();
                q.pop();
                ans.push_back(curr->val);

                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }

            vector<int> res = ans;
            sort(res.begin(), res.end());
            unordered_map<int, int> map;

            for(int i=0; i<ans.size(); i++) map[ans[i]] = i;

            for(int i=0; i<ans.size(); i++) {
                while(ans[i] != res[i]) {
                    count++;
                    int curr = map[res[i]];
                    map[ans[i]] = curr;
                    swap(ans[i], ans[curr]);
                }
            }
        }

        return count;
    }
};
