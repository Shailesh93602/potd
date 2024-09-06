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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int, int> map;
        for(int i: nums) map[i]++;
        ListNode* ans = new ListNode(-1);
        ListNode* ansPtr = ans;

        while(head) {
            if(map.find(head->val) == map.end()) {
                ans->next = new ListNode(head->val);
                ans = ans->next;
            }
            head = head->next;
        }

        return ansPtr->next;
    }
};
