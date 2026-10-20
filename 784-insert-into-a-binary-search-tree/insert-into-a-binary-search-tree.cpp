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
    TreeNode* Traverse(TreeNode*root,int val){
        if(root==NULL)return NULL;
        if(root->right==NULL && root->left==NULL){
          return root;
        }
        if(val>root->val && root->right==NULL){
            return root;
        }
        if(val<root->val && root->left==NULL){
            return root;
        }
        if(val>root->val){
           return Traverse(root->right,val);
        }
        else{
           return Traverse(root->left,val);
        }
        return NULL;

    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        //traverse to the right position
        //if there is no child to add after the inserted node then insert it durectly
        //otherwise traverse till u find the child node smaller 
        //check whether the given data is smaller or greater than the child node and add it accordingly
    
       TreeNode*curr=  Traverse(root,val);
       if(curr==NULL){
        return new TreeNode(val);
       }
        if(curr!=NULL){
        if(val<curr->val){
            curr->left = new TreeNode(val);
        }
        else{
            curr->right = new TreeNode(val);
        }
        }
       return root;
        
    }
};