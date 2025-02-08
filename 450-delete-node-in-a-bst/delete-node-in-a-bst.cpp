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
    TreeNode* minValue(TreeNode* root) {
        TreeNode* temp = root;
        while (temp->left != NULL) {
            temp = temp->left;
        }
        return temp;
    }

    TreeNode* deleteNode(TreeNode* root, int val) {
        if (root == NULL) return root;

        if (val < root->val) {
            root->left = deleteNode(root->left, val);
        } else if (val > root->val) {
            root->right = deleteNode(root->right, val);
        } else {
            //  0 child
            if (root->left == NULL && root->right == NULL) {
                delete root;
                return NULL;
            }
            //  One child (left)
            if (root->left != NULL && root->right == NULL) {
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }
            // One child (right)
            if (root->left == NULL && root->right != NULL) {
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }
            //  2 children
            if (root->left != NULL && root->right != NULL) {
                int mini = minValue(root->right)->val;
                root->val = mini;
                root->right = deleteNode(root->right, mini);
            }
        }
        return root;
    }
};
