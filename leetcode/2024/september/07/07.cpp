/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    bool solve(TreeNode* node, int i, vector<int> &pattern, vector<int> &prefixTable) {
        if(!node) return false;

        while(i && node->val != pattern[i])
            i = prefixTable[i-1];
            i += node->val == pattern[i];

            if(i == pattern.size()) return true;

            return solve(node->left, i, pattern, prefixTable) || solve(node->right, i, pattern, prefixTable);
    }
    bool isSubPath(ListNode* head, TreeNode* root) {
        vector<int> pattern = {head->val};
        vector<int> prefixTable = {0};
        int i = 0;
        head = head->next;
        
        while(head) {
            while(i and head->val != pattern[i])
                i = prefixTable[i-1];
                i += head->val == pattern[i];
                pattern.push_back(head->val);
                prefixTable.push_back(i);
                head = head->next;
        }

        return solve(root, 0, pattern, prefixTable);
    }
};
