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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans(k);

        int n = 0;
        ListNode* curr = head;
        while(curr) {
            n++;
            curr = curr->next;
        }

        int splitSize = n/k;
        int remaining = n%k;
        curr = head;
        ListNode* prev = curr;
        for(int i=0; i<k; i++) {
            ListNode* temp = curr;
            int currSize = splitSize;
            if(remaining > 0) {
                remaining--;
                currSize++;
            }

            int j=0;
            while(j< currSize) {
                prev = curr;
                if(curr) curr = curr->next;
                j++;
            }

            if(prev) prev->next = NULL;

            ans[i] = temp;
        }

        return ans;
    }
};
