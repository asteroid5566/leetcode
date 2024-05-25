class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1, mid;

        if (target > nums[right])
            return right + 1;

        while (left <= right) {
            mid = (left + right) / 2;
            if (nums[mid] == target)
                return mid;
            
            if (nums[mid] < target)
                left = mid + 1;
            if (nums[mid] > target)
                right = mid - 1;
        }

        if (target > nums[mid])
            return mid + 1;
        return mid;
    }
};
