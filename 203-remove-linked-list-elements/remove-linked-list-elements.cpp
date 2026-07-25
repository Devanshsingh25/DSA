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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode*prev,*curr,*Next;
        prev = head;
        if(head!=NULL)
        curr = head->next;
        if(head!=NULL &&head->next!=NULL){
        Next = head->next->next;
        }
        if(head==NULL){
            return NULL;
        }

        while(prev->val==val){
            head = curr;
            prev = head;
            if(curr!=NULL){
                curr = curr->next;
            }
            if( curr!=NULL && Next!=NULL)
            Next = Next->next;
            if(head==NULL)
            return head;
        }

        while(curr){
            if(curr->val==val){
                prev->next = curr->next;
                delete curr;
                curr =Next;
                if(Next!=NULL)
                Next = Next->next;
            }

            else{
                prev = prev->next;
                curr = curr->next;
                if(Next!=NULL)
                Next= Next->next;
            }
        }

        return head;
        
    }
};