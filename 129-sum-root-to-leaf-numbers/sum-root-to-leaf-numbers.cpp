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
     int sum  = 0;
     void dfs(TreeNode*root,int n){
        if(root==NULL) return;
        n = n*10+root->val;
        dfs(root->left,n);
        dfs(root->right,n);
        if(!root->right && !root->left){
            sum+=n;
        }

     }
    int sumNumbers(TreeNode* root) {
       int n = 0;
       dfs(root,n);
       return sum;

    }
};