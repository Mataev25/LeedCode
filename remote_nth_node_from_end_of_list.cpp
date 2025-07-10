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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* pred_head = new ListNode(0, head);
        ListNode* cur = pred_head;
        ListNode* prev = pred_head;

        while (n--) {
            cur = cur->next;
        }
        while (cur->next) {
            cur = cur->next;
            prev = prev->next;
        }
        ListNode* del = prev->next;
        prev->next = prev->next->next;
        delete del;
        ListNode* new_head=pred_head->next;
        delete pred_head;
        return new_head;
    }
};