class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int arr[51], i, j, max = -1, len = nums.size();
        
        for (i = 0; i < 51; i++)
            arr[i] = 0;
        
        for (i = 0; i <= len - k; i++) {
            set<int> s;
            for (j = 0; j < k; j++) {
                s.insert(nums[i + j]);
            }
            
            for (auto it = s.begin(); it != s.end(); it++)
                arr[*it]++;
        }
        
        for (i = 0; i < 51; i++) {
            if (arr[i] == 1 && i > max)
                max = i;
        }
        return max;
    }
};
