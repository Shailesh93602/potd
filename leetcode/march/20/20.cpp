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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* dummy = new ListNode(0);
        dummy->next = list1;
        ListNode* head = dummy;

        for (int i = 0; i < a; ++i) {
            head = head->next;
        }

        ListNode* temp = head;
        for(int i=0; i<b-a+2; i++) {
            temp = temp->next;
        }
        
        head->next = list2;

        ListNode* temp2 = list2;
        while(temp2->next) {
            temp2 = temp2->next;
        }

        temp2->next = temp;
        return dummy->next;
    }
};
