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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int, TreeNode*> map;
        unordered_map<int, int> parentCount;
        unordered_map<int, int> childCount;
        
        for(int i=0; i<descriptions.size(); i++) {
            if(map.find(descriptions[i][0]) == map.end()) {
                map[descriptions[i][0]] 
                    = new TreeNode(descriptions[i][0]);
            }
            if(map.find(descriptions[i][1]) == map.end()) {
                map[descriptions[i][1]] 
                    = new TreeNode(descriptions[i][1]);
            }
            if(descriptions[i][2]) {
                map[descriptions[i][0]]->left = map[descriptions[i][1]];
            }
            else {
                map[descriptions[i][0]]->right = map[descriptions[i][1]];
            }
            parentCount[descriptions[i][0]]++;
            childCount[descriptions[i][1]]++;
        }
        TreeNode* ans;
        for(auto it: map) {
            if(parentCount.find(it.first) != parentCount.end() 
                && childCount.find(it.first) == childCount.end()) {
                ans = it.second;
                break;
            }
        }
        return ans;
    }
};
