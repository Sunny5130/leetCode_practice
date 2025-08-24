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
    void preorder(TreeNode* root, vector<int>& pre) {
        if (!root) return;
        pre.push_back(root->val);
        preorder(root->left, pre);
        preorder(root->right, pre);
    }
    void flatten(TreeNode* root) {
        if (!root) return;
        vector<int> ans;
        preorder(root, ans); 
        root->val = ans[0];
        
        TreeNode* curr = root;
        for (int i=1;i<ans.size();i++) {
            curr->left = NULL;
            curr->right = new TreeNode(ans[i]);
            curr = curr->right;
        }
    }
};
