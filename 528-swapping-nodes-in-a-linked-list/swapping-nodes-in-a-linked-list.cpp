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
    ListNode* swapNodes(ListNode* head, int k) {
       //count number of nodes

       ListNode*temp1 = head;
       int count =0;
       while(temp1){
         count++;
         temp1  =temp1->next;
       }

     // point at the starting k node
       ListNode*temp2 = head;
       int s = k-1;
       while(s--){
        temp2 = temp2->next;
       }
       
       // point at the last K node
       count = count-k;
       ListNode*temp3 = head;
       while(count--){
            temp3 = temp3->next;
       }
         
         int temp = temp3->val;
         temp3->val = temp2->val;
         temp2->val = temp;

         return head;

    }
};