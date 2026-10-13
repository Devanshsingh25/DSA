/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
   TreeNode*getsuccessor(TreeNode*root){
    TreeNode*curr = root->right;
    while(curr!=NULL && curr->left!=NULL){
        curr = curr->left;
    } 
    return curr;
   }
  
    TreeNode* deleteNode(TreeNode* root, int key) {
        //target1:- reach to the key node
        if(root==NULL)return NULL;
        if(key<root->val){
            root->left = deleteNode(root->left,key);
        }
        else if(key>root->val){
            root->right = deleteNode(root->right,key);
        }
        else{
            //we get the keyNode now we hv three cases
            //1st case
            if(root->left==NULL){
                TreeNode*temp =  root->right;
                delete root;
                return temp;
            }

            //2nd case
            if(root->right==NULL){
                TreeNode*temp = root->left;
                delete root;
                return temp;
            }

            //3rd case
                        //4th step
         TreeNode*succ = getsuccessor(root);
            root->val = succ->val;
            root->right = deleteNode(root->right,succ->val);

        }
        return root;
    }
};