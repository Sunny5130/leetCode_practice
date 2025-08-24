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
    void inorder(TreeNode* root,vector<int>& ans) {
        if(root==NULL)return;
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
    TreeNode* inordertoBST(int l,int r,vector<int>&ans){
        if(l>r)return NULL;
        int mid=(l+r)/2;
        TreeNode* root=new TreeNode(ans[mid]);
        root->left=inordertoBST(l,mid-1,ans);
        root->right=inordertoBST(mid+1,r,ans);
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>ans;
        inorder(root,ans);
        return inordertoBST(0,ans.size()-1,ans);
    }
};

