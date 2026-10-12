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
    TreeNode*bst(TreeNode* root, int val){
        if(root==NULL)return NULL;
        if(root->val==val)return root;
        if(root->val>val){
            return bst(root->left,val);
        }
        else{
            return bst(root->right,val);
        }

    }
    // TreeNode*print(TreeNode*root,vector<int>&v){

    // }
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode*res = bst(root,val);
       return res;
        
    }
};