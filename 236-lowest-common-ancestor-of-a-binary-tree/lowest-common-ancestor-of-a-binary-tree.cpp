/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
   bool lcs(TreeNode*root, TreeNode* key,vector<TreeNode*>&path){
        if(root==NULL)return false;
        path.push_back(root);
        if(root==key)return true;
        if(lcs(root->left,key,path) || lcs(root->right,key,path)){
            return true;
        }
        path.pop_back();
        return false;
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*>path1;
        vector<TreeNode*>path2;
        if(lcs(root,p,path1)==false || lcs(root,q,path2)==false){
            return NULL;
        }
        path1.push_back(0);
        path2.push_back(0);
        for(int i=0;i<path1.size()-1 && i<path2.size()-1;i++){
            if(path1[i+1]!=path2[i+1]){
                return path1[i];
            }
        }

       return NULL;
    }
};