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
    void pre(TreeNode*root,vector<TreeNode*>&v){
        if(root==NULL)return;
        v.push_back(root);
        pre(root->left,v);
        pre(root->right,v);
        return;

    }
    void flatten(TreeNode* root) {
        vector<TreeNode*>v;
        pre(root,v);
        TreeNode*curr = root;
        for(int i =1;i<v.size();i++){
            curr->right = v[i];
            curr->left = NULL;
            curr = curr->right;
        }
    }
};