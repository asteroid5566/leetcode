class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int odd = 0, even = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2)
                odd++;
            else
                even++;
        }
        
        nums.clear();
        
        for (int i = 0; i < even; i++)
            nums.push_back(0);
        for (int i = 0; i < odd; i++)
            nums.push_back(1);
        return nums;
    }
};
