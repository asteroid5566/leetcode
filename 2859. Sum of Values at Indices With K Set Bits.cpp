class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int i, cnt, sum = 0, tmp;

        for (i = 0; i < nums.size(); i++) {
            tmp = i;
            cnt = 0;

            while (tmp > 0) {
                cnt += tmp & 1;
                tmp >>= 1;
            }

            if (cnt == k)
                sum += nums[i];
        }
        return sum;
    }
};