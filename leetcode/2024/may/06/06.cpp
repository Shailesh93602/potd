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
    ListNode* removeNodes(ListNode* head) {
        if(!head) return NULL;

        ListNode* temp = head;
        ListNode* nxtGreater = removeNodes(temp->next);

        temp->next = nxtGreater;
        if (!nxtGreater || temp->val >= nxtGreater->val) {
            return temp;
        }
        return nxtGreater;
    }
};
