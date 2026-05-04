class Solution {
public:
    void dfs(vector<int>& candidates, int remain, vector<int> &v, int start, vector<vector<int>> &ans) {
        if (remain == 0) {
            ans.push_back(v);
            return;
        }
        
        for (int i = start; i < candidates.size(); i++) {
            if (candidates[i] > remain)
                break;
            v.push_back(candidates[i]);
            dfs(candidates, remain - candidates[i], v, i, ans);
            v.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> v;
        dfs(candidates, target, v, 0, ans);
        return ans;
    }
};
