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
    void inorder(TreeNode*root,vector<int>&ans){
        if(root==NULL){
            return;

        }
       inorder(root->left,ans);
       ans.push_back(root->val);
       inorder(root->right,ans);

    }
    int kthSmallest(TreeNode* root, int k) {
    //     TreeNode*curr  = root;
    //     int count = 1;
    //     while(curr->left!=NULL){
    //         curr  = curr->left;
    //         count++;
    //     }

    //     curr = root;
    //     int res = count-k;
       
    //     while(res--){
    //         curr = curr->left;
    //     }
    //     if(curr!=NULL)
    //     return curr->val;
    //     else
    //     return -1;
    // }

    vector<int>ans;
    inorder(root,ans);
    return ans[k-1];
    }
};