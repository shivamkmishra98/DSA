class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        // Base case: empty tree has no paths
        if (!root) return false;
        
        // Leaf node check: must have no children and match remaining sum
        if (!root->left && !root->right) {
            return root->val == targetSum;
        }
        
        // Subtract current node value and check subtrees
        int nextTarget = targetSum - root->val;
        return hasPathSum(root->left, nextTarget) || hasPathSum(root->right, nextTarget);
    }
};
