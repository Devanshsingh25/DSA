/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Codec {
public:

    string serialize(TreeNode* root) {

        if (root == NULL)
            return "";

        queue<TreeNode*> q;
        q.push(root);

        string ans = "";

        while (!q.empty()) {

             TreeNode* temp = q.front();
             q.pop();

            if (temp == NULL) {
                ans += "N,";
                continue;
            }

            ans += to_string(temp->val) + ",";

            q.push(temp->left);
            q.push(temp->right);
        }

        return ans;
    }

     TreeNode* deserialize(string data) {

        if (data.size() == 0)
            return NULL;

         stringstream ss(data);
         string str;

         getline(ss, str, ',');

        TreeNode* root = new TreeNode(stoi(str));

        queue<TreeNode*> q;
        q.push(root);

         while (!q.empty()) {

             TreeNode* parent = q.front();
             q.pop();

             getline(ss, str, ',');

             if (str != "N") {
                parent->left = new TreeNode(stoi(str));
                q.push(parent->left);
            }

             getline(ss, str, ',');

             if (str != "N") {
                 parent->right = new TreeNode(stoi(str));
                 q.push(parent->right);
            }
        }

         return root;
    }
};