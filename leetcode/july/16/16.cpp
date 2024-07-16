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
    map<TreeNode*,TreeNode*> nodeToPar; 
    TreeNode* start = NULL;
    TreeNode* end = NULL;
    string res;
    void dfs(TreeNode* root,int startValue,int destValue){
        if(root->val == startValue) start = root;
        if(root->val == destValue) end = root;
        if(root->left){
            nodeToPar[root->left] = root;
            dfs(root->left,startValue,destValue);
        }
        if(root->right){
            nodeToPar[root->right] = root;
            dfs(root->right,startValue,destValue);
        }
        return;
    }
    void solve(TreeNode* start,TreeNode* par,TreeNode* dest,string& ans){
        if(start == dest){
            res = ans;
            return;
        }
        if(start->right && start->right != par){
            ans += 'R';
            solve(start->right,start,dest,ans);
            ans.pop_back();
        }
        if(start->left && start->left != par){
            ans += 'L';
            solve(start->left,start,dest,ans);
            ans.pop_back();
        }
        if(nodeToPar[start] && nodeToPar[start] != par){
            ans += 'U';
            solve(nodeToPar[start],start,dest,ans);
            ans.pop_back();
        }
    }
    string getDirections(TreeNode* root, int startValue, int destValue) {
        dfs(root,startValue,destValue);
        string ans = "";
        solve(start,start,end,ans);
        return res;
    }
};
