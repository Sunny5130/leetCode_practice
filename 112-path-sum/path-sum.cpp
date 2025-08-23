class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (!root) return false;
        stack<pair<TreeNode*, int>> st;
        st.push({root, root->val});
    
        while (!st.empty()) {
            auto[node, currSum] = st.top();
            st.pop();
            if (!node->left && !node->right && currSum == targetSum)return true;
            if (node->right) st.push({node->right, currSum + node->right->val});
            if (node->left) st.push({node->left, currSum + node->left->val});
        }
        return false;
    }
};
