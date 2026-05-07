class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> ma;
        vector<vector<string>> ans;
        int i;
        string key;

        for (i = 0; i < strs.size(); i++) {
            key = strs[i];
            sort(key.begin(), key.end());    
            ma[key].push_back(strs[i]);
        }

        for (auto it = ma.begin(); it != ma.end(); ++it)
            ans.push_back(it->second);

        return ans;
    }
};
