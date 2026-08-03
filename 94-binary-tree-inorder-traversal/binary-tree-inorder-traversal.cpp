class Solution {
private:
    void inorder(TreeNode* root, vector<int>& nodes) {
        if (!root) return; // Base case: reached a null pointer
        
        inorder(root->left, nodes);   // Traverse left subtree
        nodes.push_back(root->val);   // Visit root node
        inorder(root->right, nodes);  // Traverse right subtree
    }

public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> nodes;
        inorder(root, nodes);
        return nodes;
    }
};