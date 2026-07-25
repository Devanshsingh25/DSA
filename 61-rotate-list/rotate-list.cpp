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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode*temp,*prev,*curr,*headA;
        temp = head;
        curr = head;
        prev = head;
        int count =0;
        if(head==NULL){
            return NULL;
        }

        while(temp){
            count++;
            temp = temp->next;
        }

        k = k%count;

        if(count==1 || k==0)
        return head;

     
        count = count-k;
        while(count--){
            prev = curr;
            curr = curr->next;
        }

        prev->next = NULL;
        headA =curr;
        while(curr->next!=NULL){
            curr = curr->next;
        }
        curr->next =head;
        return headA;
        
    }
};