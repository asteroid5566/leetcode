class Solution {
public:
    void dfs(TreeNode* node, int level, vector<vector<int>>& result) {
        if (!node) return;

        if (result.size() == level) {
            result.push_back({});
        }

        result[level].push_back(node->val);

        dfs(node->left, level + 1, result);
        dfs(node->right, level + 1, result);
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        dfs(root, 0, result);
        return result;
    }
};
