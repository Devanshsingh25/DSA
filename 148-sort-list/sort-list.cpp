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
    ListNode* sortList(ListNode* head) {
        // if(head==NULL)return NULL;
        // ListNode*curr = head;
        // ListNode*Next = head->next;
        // while(curr){
        //     Next = curr->next;
        //     while(Next){
        //         if(curr->val>Next->val){
        //             int temp = curr->val;
        //             curr->val = Next->val;
        //             Next->val = temp;
        //         }
        //         Next = Next->next;

        //     }
        //     curr = curr->next;
        // }
        // return head;

        ListNode*curr = head;
        vector<int>v;
        while(curr){
            v.push_back(curr->val);
            curr = curr->next;
        }
        curr = head;

        sort(v.begin(),v.end());
        for(int i = 0;i<v.size();i++){
            curr->val = v[i];
            curr = curr->next;
        }

        return head;
        
    }
};