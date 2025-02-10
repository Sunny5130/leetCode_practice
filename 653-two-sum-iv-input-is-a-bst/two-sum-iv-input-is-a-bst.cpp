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
    void inorder(TreeNode* root,vector<int>&in){
        if(root==NULL){
            return ;
        }
        inorder(root->left,in);
        in.push_back(root->val);
        inorder(root->right,in);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int>inordertr;
        inorder(root,inordertr);
        int i=0;
        int j=inordertr.size()-1;
        while(i<j){
            int sum=inordertr[i]+inordertr[j];
          if(sum==k){
            return true;
        }else if(sum<k){
            i++;
        }else{
            j--;
        }
    }
    return false;
}
};