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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
      stack<TreeNode*>st1;
      stack<TreeNode*>st2;
     
      vector<vector<int>>res;
      if(root==NULL){
        return res;
      }
      st1.push(root);
      while(!st1.empty() || !st2.empty()){
         vector<int>ans;
        while(!st1.empty()){
            ans.push_back(st1.top()->val);
            if(st1.top()->left!=NULL){
                st2.push(st1.top()->left);
            }
            if(st1.top()->right!=NULL){
                st2.push(st1.top()->right);
            }

            st1.pop();
        }
        if(ans.size()!=0)
        res.push_back(ans);
        ans = {};
        while(!st2.empty()){
            ans.push_back(st2.top()->val);
            if(st2.top()->right!=NULL){
                st1.push(st2.top()->right);
            }
            if(st2.top()->left!=NULL){
                st1.push(st2.top()->left);
            }

            st2.pop();

        }
        if(ans.size()!=0)
        res.push_back(ans);

          
      }
      return res;
             
    }
};