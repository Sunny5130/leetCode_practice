class Solution {
public:
    int sumNumbers(TreeNode* root) {
        int totalSum = 0;
        queue<pair<TreeNode*, int>> q; // <TreeNode*, sumSoFar>
        q.push({root, 0});
        while(!q.empty()){
            auto [root, currentSum] = q.front(); q.pop();
            currentSum = currentSum*10 + root->val;
            if(root->left==NULL && root->right==NULL) totalSum += currentSum;
            if(root->left) q.push({root->left, currentSum});
            if(root->right) q.push({root->right, currentSum});
        }
        return totalSum;
    }
};