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
    ListNode* deleteDuplicates(ListNode* head) {
        
        // Dummy node before head
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        // prev points to the last node that is definitely unique
        ListNode* prev = dummy;
        
        while (head != NULL) {
            
            // Check if current node has duplicates
            if (head->next != NULL && head->val == head->next->val) {
                
                // Skip all nodes having the same value
                while (head->next != NULL && head->val == head->next->val) {
                    head = head->next;
                }
                
                // Remove all duplicates
                prev->next = head->next;
            }
            else {
                // Current node is unique
                prev = prev->next;
            }
            
            // Move to next node
            head = head->next;
        }
        
        return dummy->next;
    }
};