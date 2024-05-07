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
    ListNode* doubleIt(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;

        while(curr) {
            int val = curr->val * 2;

            if(val < 10) curr ->val = val;
            else if(prev) {
                curr->val = val%10;
                prev->val++;
            }
            else {
                head = new ListNode(1, curr);
                curr->val = val%10;
            }

            prev = curr;
            curr = curr->next;
        }

        return head;
    }
};
