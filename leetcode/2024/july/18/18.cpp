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
    vector<int> solve(TreeNode* node, int &ans, int distance) {
        if(!node) return {};
        
        if (!node->left && !node->right) return {1};

        vector<int> leftDistances = solve(node->left, ans, distance);
        vector<int> rightDistances = solve(node->right, ans, distance);

        for (int l : leftDistances) {
            for (int r : rightDistances) {
                if (l + r <= distance) {
                    ans++;
                }
            }
        }

        vector<int> currentDistances;
        for (int l : leftDistances) {
            if (l + 1 < distance) currentDistances.push_back(l + 1);
        }
        for (int r : rightDistances) {
            if (r + 1 < distance) currentDistances.push_back(r + 1);
        }

        return currentDistances;
    }

    int countPairs(TreeNode* root, int distance) {
        int ans = 0;
        solve(root, ans, distance);
        return ans;
    }
};
