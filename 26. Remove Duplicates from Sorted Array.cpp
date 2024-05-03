class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size(), i, j;

        for (i = 1, j = 1; i < len; i++) {
            if (nums[i] != nums[i - 1])
                nums[j++] = nums[i];
        }

        return j;
    }
};
