/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
     ListNode*single = head;
     ListNode*doublee = head;
     
     while(doublee!=NULL && doublee->next!=NULL){
       
        single = single->next;
        
        doublee = doublee->next->next;
        if(single == doublee){
            single = head;
            while(single!=doublee){
                single = single->next;
                doublee = doublee->next;
            }
            return single;
        }
     }
     return NULL;

          
        
    }
};