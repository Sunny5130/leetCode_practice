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
    TreeNode* searchBST(TreeNode* root, int val) {
        //------------------------------By recursion-------------------------->>
        // if(root ==NULL)return NULL;
        // if(root->val == val)return root;
        // if(val<root->val)return searchBST(root->left,val);
        // else return searchBST(root->right,val);
        
        //------------------------------By iterative approach--------------------------->>
        TreeNode* temp=root;
        while(temp!=NULL){
            if(temp->val==val)return temp;
            if(val > temp->val){
                temp=temp->right;
            }else{
                temp=temp->left;
            }
        }
        return NULL;
    }
};
