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
    //  int mini(TreeNode*root){
    //     if(root==NULL)return 0;
    //     return 1+mini(root->left)+mini(root->right);
    //  }
    int minDepth(TreeNode* root) {
         queue<TreeNode*>q;
         q.push(root);
         int count = 0;
         if(root==nullptr)return 0;
         while(!q.empty()){
           
            int n = q.size();
            count++;
            for(int i =0;i<n;i++){
             TreeNode*curr = q.front();
            q.pop();
            if(curr->right==nullptr && curr->left==nullptr)return count;
          
            if(curr->right){
                q.push(curr->right);
            }
            if(curr->left){
                q.push(curr->left);
            }
            }
         }

         return 0;
    }
};