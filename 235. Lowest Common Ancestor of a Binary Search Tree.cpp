class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int big = max(p->val, q->val), small = min(p->val, q->val);

        while (root) {
            if (root->val > big)
                root = root->left;
            else if (root->val < small)
                root = root->right;
            else
                return root;
        }
        return nullptr;
    }
};
