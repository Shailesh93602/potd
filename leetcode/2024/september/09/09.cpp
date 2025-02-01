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
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        int i=0, j=0;
        int dir = 0;
        int movement[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        vector<vector<int>> ans(m, vector<int>(n, -1));

        while(head) {
            ans[i][j] = head->val;
            int x = i + movement[dir][0];
            int y = j + movement[dir][1];

            if(min(x, y) < 0 || x >= m || y >= n || ans[x][y] != -1) 
                dir = (dir + 1) % 4;

            i += movement[dir][0];
            j += movement[dir][1];

            head = head->next;
        }

        return ans;
    }
};
