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
    void solve(TreeNode* root, int targetSum,int sum,vector<int>&ans,vector<vector<int>>&res){
        if(root==NULL){
            return;
        }

        sum+=root->val;
        ans.push_back(root->val);

        if(root->right==NULL && root->left==NULL){
            if(sum==targetSum){
                res.push_back(ans);
                ans.pop_back();
                return;
            }
            else{
                ans.pop_back();
                return;
            }
        }

          solve(root->left,targetSum,sum,ans,res);
            solve(root->right,targetSum,sum,ans,res);
            ans.pop_back();
        return;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        int sum  = 0;
        vector<int>ans;
        vector<vector<int>>res;
        solve(root,targetSum,sum,ans,res);
        return res;
    }
};