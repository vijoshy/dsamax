class Solution {
    public:
        vector<int> inorderTraversal(TreeNode* root) {
            vector<int> result;
            inorderHelper(root, result);
            return result;
        }
    
    private:
        void inorderHelper(TreeNode* node, vector<int>& result) {
            if (node == NULL) return;
            inorderHelper(node->left, result);
            result.push_back(node->val);
            inorderHelper(node->right, result);
        }
    };
    