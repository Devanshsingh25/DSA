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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>v;
        ListNode*temp1 = head;
        ListNode*temp2 = NULL;
        while(temp1){
            temp2 = temp1->next;
           
            while( temp2!=NULL && (temp2->val)<=(temp1->val)){
                temp2 = temp2->next;
            }
         
             if(temp2==NULL){
                v.push_back(0);
             }
             else if(temp2->val>temp1->val){
                v.push_back(temp2->val);
             }
             temp1 = temp1->next;

        }
        return v;
    }
};