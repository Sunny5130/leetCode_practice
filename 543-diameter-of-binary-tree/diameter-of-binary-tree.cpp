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
  
  int diameterOfBinaryTree(TreeNode* root) {
     int maxi = 0;  
    getHeight(root, maxi);
    return maxi;
    }
private:
    int getHeight(TreeNode *root, int &maxi) {
    if (root == NULL) return 0;

    int lefthei = getHeight(root->left, maxi);
    int righthei = getHeight(root->right, maxi);

    maxi = max(maxi, lefthei + righthei);

    return max(lefthei, righthei) + 1;
}
};
