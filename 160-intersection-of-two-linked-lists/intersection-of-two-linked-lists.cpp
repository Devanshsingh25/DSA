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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp1= headA;
        ListNode *temp2 = headB;
        int count1=0;
        int count2=0;
        int count=0;
        while(temp1){
            count1++;
            temp1=temp1->next;
        }
         while(temp2){
            count2++;
            temp2 = temp2->next;

         }

         temp1 = headA;
         temp2 = headB;

        if(count1>count2){
            count = count1-count2;
            while(count--){
                temp1 = temp1->next;
            }
        }
        else if(count2>count1){
            count = count2-count1;
            while(count--){
                temp2 = temp2->next;
            }
        }

        while(temp1!=temp2){
            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        if(temp1!=temp2){
            return NULL;
        }

        return temp2;




    }
};