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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* dummy = new ListNode(-1);
        ListNode* dummyPointer = dummy;
        int sum = 0;
        head = head->next;
        while(head) {
            if(head->val) {
                sum += head->val;
            } else {
                dummy->next = new ListNode(sum);
                dummy = dummy->next;
                sum = 0;
            }
            head = head->next;
        }
        return dummyPointer->next;
    }
};
