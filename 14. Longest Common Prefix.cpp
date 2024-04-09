class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size(), i, j;
        string ans = "";
        sort(strs.begin(), strs.end());
        for (i = 0; i < strs[0].size(); i++) {
            if (strs[0][i] != strs[n - 1][i])
                break;
            else
                ans += strs[0][i];
        }
        return ans;
    }
};
