class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans = {{1}};

        for (int i = 1; i < numRows; i++) {
            vector<int> v = {1};
            for (int j = 0; j < ans[i - 1].size() - 1; j++)
                v.push_back(ans[i - 1][j] + ans[i - 1][j + 1]);
            v.push_back(1);
            ans.push_back(v);
        }
        return ans;
    }
};
