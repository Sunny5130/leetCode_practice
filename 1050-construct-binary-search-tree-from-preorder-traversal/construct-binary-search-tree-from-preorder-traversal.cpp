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
 /**
 * Definition for a binary tree node.
 */
class Solution {
public:
    TreeNode* insertBst(TreeNode* root, int d) {
        if (root ==nullptr) {
            return new TreeNode(d);
        }
        if (d < root->val) {
            root->left =insertBst(root->left, d);
        } else {
            root->right =insertBst(root->right, d);
        }
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root = nullptr;
        for (int d : preorder) {
            root = insertBst(root, d);
        }
        return root;
    }
};
