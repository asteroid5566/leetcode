class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int len = nums.size(), i, j;
        vector<int> ans;

        for (i = 0; i < len; i += 2) {
            for (j = 0; j < nums[i]; j++)
                ans.push_back(nums[i + 1]);
        } 
        return ans;
    }
};
