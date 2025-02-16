class Solution {
    public:
        vector<int> preorderTraversal(TreeNode*root) {
            vector<int>result;
            preorderHelper(root,result);
            return result;
        }
        
    private:
        void preorderHelper(TreeNode* root, vector<int>& result) {
            if (!root)return;
            result.push_back(root->val);
            preorderHelper(root->left,result);
            preorderHelper(root->right,result);
        }
    };
    