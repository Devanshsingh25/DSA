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
    int pairSum(ListNode* head) {
        vector<int>v;
        ListNode*temp1 = head;
        while(temp1){
            v.push_back(temp1->val);
            temp1 = temp1->next;
        }
        int i  =0;
        int j  = v.size()-1;
        int sum =0;
        int maxi =0;
        while(i<=j){
           sum = v[i]+v[j];
           maxi = max(sum,maxi);
           i++;
           j--;
           sum = 0;
        }

        return maxi;
    }
};