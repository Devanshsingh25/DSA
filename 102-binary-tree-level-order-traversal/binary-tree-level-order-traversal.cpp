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
    vector<vector<int>> levelOrder(TreeNode* root) {

     
             vector<int>ans;
        vector<vector<int>>res;
        if(root==NULL){
            return res;
        }
        queue<TreeNode*>q;
        q.push(root);
        ans.push_back(root->val);
        res.push_back(ans);
        while(!q.empty()){
            ans= {};
            int count = q.size();
            while(count--){
         
            TreeNode*curr = q.front();
            q.pop();
            if(curr->left!=NULL){
                q.push(curr->left);
                ans.push_back(curr->left->val);
            }
            if(curr->right!=NULL){
                q.push(curr->right);
                ans.push_back(curr->right->val);
            }
            
            }
    
            if(ans.size()!=0)
            res.push_back(ans);
    }
        
        
        return res;
    }
};