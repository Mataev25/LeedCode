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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
            if (!head || left == right) return head;
            ListNode* prev = nullptr;
            ListNode* curr = head;
            for (int i = 1; i < left; ++i) {
                prev = curr;
                curr = curr->next;
            }

            ListNode* tail = curr; 
            ListNode* next = nullptr;
            ListNode* new_head = nullptr;  

            for (int i = left; i <= right; ++i) {
                next = curr->next;
                curr->next = new_head;
                new_head = curr;
                curr = next;
            }

            tail->next = curr;  

            if (prev) {
                prev->next = new_head;  
                return head;
            }
            else {
                return new_head;  
            }
            
        }
};