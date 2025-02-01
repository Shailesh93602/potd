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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* prev = head;
        ListNode* curr = head->next;
        vector<int> ans = {-1, -1};
        int prevPos = -1;
        int currPos = -1;
        int firstPos = -1;
        int pos = 0;

        while(curr->next) {
            if((curr->val < prev->val && curr->val < curr->next->val) || (curr->val > prev->val && curr->val > curr->next->val)) {
                prevPos = currPos;
                currPos = pos;
                if(firstPos == -1) firstPos = pos;
                if(prevPos != -1) {
                    if(ans[0] == -1) ans[0] = currPos - prevPos;
                    else ans[0] = min(ans[0], currPos-prevPos);
                    ans[1] = pos-firstPos;
                }
            }
            pos++;
            prev = curr;
            curr = curr->next;
        }
        return ans;
    }
};
