/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
}; */

class Solution {
    void solve(Node* root, int sum, int n, int &maxVal, int &ans) {
        if(!root) {
            if(n > maxVal) {
                maxVal = n;
                ans = sum;
            }
            else if(n == maxVal && sum > ans) ans = sum;
        } else {
            solve(root->left, sum + root->data, n + 1, maxVal, ans);
            solve(root->right, sum + root->data, n + 1, maxVal, ans);
        }
    }
  public:
    int sumOfLongRootToLeafPath(Node *root) {
        // code here
        if(!root) return 0;
        
        int ans = INT_MIN, maxLen = 0;
        
        solve(root, 0, 0, maxLen, ans);
        
        return ans;
    }
};
