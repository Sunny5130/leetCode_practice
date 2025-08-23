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
    void trav(TreeNode* root, vector<int> &sol, int tar, int curr){
        if(!root) return;
        curr += root->val;
        sol.push_back(root->val);
        if(!root->left && !root->right && curr == tar){
            ans.push_back(sol);
        }
        trav(root->left, sol, tar, curr);
        trav(root->right, sol, tar, curr);
        sol.pop_back();
    }
    vector<vector<int>> ans;
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> sol;
        trav(root, sol, targetSum, 0);
        return ans;
    }
};