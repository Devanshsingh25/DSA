/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node*curr = head;
        if(curr==NULL){
            return NULL;
        }
        while(curr!=NULL){
          while(curr!=NULL && curr->child==NULL){
            curr = curr->next;
          
          }
         if(curr==NULL)
         break;

          Node*previous = curr;

          Node*temp = curr->next;
          Node*Next = curr->child;
          curr->next = curr->child;
          Next->prev = curr;
          curr->child = NULL;
          while(curr->next!=NULL){
            curr = curr->next;
          }

          curr->next= temp;
          if(temp!=NULL)
          temp->prev = curr;

          curr= previous;

        }               
     return head;

    }
};