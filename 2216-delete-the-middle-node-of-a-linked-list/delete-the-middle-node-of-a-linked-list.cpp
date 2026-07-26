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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return NULL;
        }
     ListNode*temp,*prev;
     temp = head;
     prev = head;
     int count =0;
     while(temp){
        count++;
        temp = temp->next;
     }
     if(count%2==0){
        count++;
     }
     count = count/2;
     temp = head;
     while(count--){
        prev = temp;
        temp = temp->next;
     }
     prev->next = temp->next;
     delete temp;
     return head;
        
    }
};